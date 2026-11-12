#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatBattleQuitInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xD5963F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD596480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xD596490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xD5964B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xD5964A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xD5964C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleQuitInfo_TypeDefinitionIndex = 78376;

	class DiceCombatBattleQuitInfo : public ::System::Object
	{
	public:
		::System::UInt32 _StageID_k__BackingField; // 0x10
		::System::Boolean _IsPVE_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo* Create(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo*(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPVE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_ISPVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_STAGEID_OFFSET))(this, a1);
		}

	};
}
