#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatV2PVPBattlePreparePageParam; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xCC9A850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9F880)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xCC9F890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xCC9F8A0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PVPBattlePreparePageParam_TypeDefinitionIndex = 76197;

	class DiceCombatV2PVPBattlePreparePageParam : public ::System::Object
	{
	public:
		::System::Boolean _ShowImmediately_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam* Create(::System::Boolean a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PVPBattlePreparePageParam*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_ShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_ShowImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET))(this, a1);
		}

	};
}
