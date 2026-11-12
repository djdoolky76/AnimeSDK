#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityElationEchoPointMaxChange; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF74500)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEF74450)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEF74400)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GET_NEWMAX_OFFSET UNITYSDK_OFFSET(0xEF744C0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GET_OLDMAX_OFFSET UNITYSDK_OFFSET(0xEF744A0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xEF744E0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xEF74390)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_SET_NEWMAX_OFFSET UNITYSDK_OFFSET(0xEF744D0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_SET_OLDMAX_OFFSET UNITYSDK_OFFSET(0xEF744B0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xEF744F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityElationEchoPointMaxChange_TypeDefinitionIndex = 57819;

	class AbilityElationEchoPointMaxChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _NewMax_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _OldMax_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityElationEchoPointMaxChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::AbilityElationEchoPointMaxChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_OldMax()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GET_OLDMAX_OFFSET))(this);
		}

		::System::Void set_OldMax(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_SET_OLDMAX_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_NewMax()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GET_NEWMAX_OFFSET))(this);
		}

		::System::Void set_NewMax(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_SET_NEWMAX_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTMAXCHANGE_SET_TARGETENTITY_OFFSET))(this, a1);
		}

	};
}
