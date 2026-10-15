#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ParkourRank; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_PARKOURSETTLEMENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA87A10)
#define RPG_CLIENT_PARKOURSETTLEMENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA87A50)
#define RPG_CLIENT_PARKOURSETTLEMENT___C__SORTRANKS_B__37_0_OFFSET UNITYSDK_OFFSET(0xDA87A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSettlement___c_TypeDefinitionIndex = 61862;

	class ParkourSettlement___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x114E0);
		}

		static ::System::Predicate_1<::RPG::Client::ParkourRank*>** StaticGet___9__37_0()
		{
			return (::System::Predicate_1<::RPG::Client::ParkourRank*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x114E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SortRanks_b__37_0(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETTLEMENT___C__SORTRANKS_B__37_0_OFFSET))(this, a1);
		}

	};
}
