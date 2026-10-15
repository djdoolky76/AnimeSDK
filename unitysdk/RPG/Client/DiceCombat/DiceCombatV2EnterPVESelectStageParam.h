#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatV2EnterPVESelectStageParam; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xCCA14F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCCA1570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_GET_SELECTSTAGEID_OFFSET UNITYSDK_OFFSET(0xCCA1580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_SET_SELECTSTAGEID_OFFSET UNITYSDK_OFFSET(0xCCA1590)

namespace RPG::Client::DiceCombat
{
	class DiceCombatV2EnterPVESelectStageParam : public ::System::Object
	{
	public:
		::System::UInt32 _SelectStageID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2EnterPVESelectStageParam*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_SelectStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_GET_SELECTSTAGEID_OFFSET))(this);
		}

		::System::Void set_SelectStageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2ENTERPVESELECTSTAGEPARAM_SET_SELECTSTAGEID_OFFSET))(this, a1);
		}

	};
}
