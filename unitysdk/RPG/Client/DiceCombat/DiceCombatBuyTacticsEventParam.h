#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD5982F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xD598300)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_TACTICSINDEX_OFFSET UNITYSDK_OFFSET(0xD598320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xD598310)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_TACTICSINDEX_OFFSET UNITYSDK_OFFSET(0xD598330)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBuyTacticsEventParam_TypeDefinitionIndex = 78489;

	class DiceCombatBuyTacticsEventParam : public ::System::Object
	{
	public:
		::System::Int32 _TacticsIndex_k__BackingField; // 0x10
		::System::Boolean _IsLocalPlayer_k__BackingField; // 0x14
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::Void set_IsLocalPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_ISLOCALPLAYER_OFFSET))(this, a1);
		}

		::System::Int32 get_TacticsIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_GET_TACTICSINDEX_OFFSET))(this);
		}

		::System::Void set_TacticsIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBUYTACTICSEVENTPARAM_SET_TACTICSINDEX_OFFSET))(this, a1);
		}

	};
}
