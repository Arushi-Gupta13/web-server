#include "BindingSocket.hpp"
int HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface): SimpleSocket(domain,
service, protocol, port, interface)
{
    connect_to_network(get sock(),get_address());

}
int HDE::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return bind(sock,(struct sockaddr *)&address, sizeof(address));
}