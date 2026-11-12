#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatPvEBattlePreparePageParam; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xD5A5BD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD5A5B80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD5A5BB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xD5A5B90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD5A5BC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xD5A5BA0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPvEBattlePreparePageParam_TypeDefinitionIndex = 78455;

	class DiceCombatPvEBattlePreparePageParam : public ::System::Object
	{
	public:
		::System::Boolean _ShowImmediately_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _StageID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_ShowImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam* Create(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPvEBattlePreparePageParam*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPVEBATTLEPREPAREPAGEPARAM_CREATE_OFFSET))(a1, a2);
		}

	};
}
