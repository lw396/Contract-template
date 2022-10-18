#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT data : public contract
{
public:
   using contract::contract;

   ACTION hi(name nm);

   using hi_action = action_wrapper<"hi"_n, &data::hi>;
};
