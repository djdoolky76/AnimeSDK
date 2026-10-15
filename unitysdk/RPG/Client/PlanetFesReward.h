#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
class GNMCIEPEBPK;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class PlanetFesReward; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDBCB2F0)
#define RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0xDBB6B00)
#define RPG_CLIENT_PLANETFESREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDBCB2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesReward_TypeDefinitionIndex = 66625;

	class PlanetFesReward : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger Coin; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Items; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesReward* Create(::GNMCIEPEBPK* a1)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesReward* Create_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET))(a1);
		}

	};
}
