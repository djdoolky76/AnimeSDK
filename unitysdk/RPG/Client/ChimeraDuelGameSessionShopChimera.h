#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGHDDIBDABP;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CHECKCANUPGRADEANDLEVELUPANY_OFFSET UNITYSDK_OFFSET(0xCB247D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CREATE_OFFSET UNITYSDK_OFFSET(0xCB246B0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xCB24760)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CTOR_OFFSET UNITYSDK_OFFSET(0xCB24750)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_CHIMERA_OFFSET UNITYSDK_OFFSET(0xCB24680)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xCB24690)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCB22DB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xCB246A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionShopChimera_TypeDefinitionIndex = 63329;

	class ChimeraDuelGameSessionShopChimera : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* _Chimera_k__BackingField; // 0x10
		::System::Action_1<::System::Boolean>* OnIsLockedChanged; // 0x18
		::System::Boolean _IsLocked_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameSessionShopChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShopChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionChimera* get_Chimera()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionChimera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_CHIMERA_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_SET_ISLOCKED_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionShopChimera* Create(::KGHDDIBDABP* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::KGHDDIBDABP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CREATE_OFFSET))(a1);
		}

		::System::Void CheckCanUpgradeAndLevelUpAny(::RPG::Client::ChimeraDuelGameSessionTeam* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONSHOPCHIMERA_CHECKCANUPGRADEANDLEVELUPANY_OFFSET))(this, a1, a2, a3);
		}

	};
}
