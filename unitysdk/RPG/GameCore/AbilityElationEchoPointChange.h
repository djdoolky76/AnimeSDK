#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AbilityElationEchoPointChange; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AAA80)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4AA9A0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AA940)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4AAA30)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4AAA10)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE4AA9F0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xE4AAA60)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4AA880)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE4AAA50)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4AAA20)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE4AAA00)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xE4AAA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityElationEchoPointChange_TypeDefinitionIndex = 56597;

	class AbilityElationEchoPointChange : public ::CMPGEAFHHDC
	{
	public:
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x128
		::RPG::GameCore::FixPoint _ChangeValue_k__BackingField; // 0x130
		::RPG::GameCore::FixPoint _OriginModifyValue_k__BackingField; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityElationEchoPointChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::CHMCAGBDPJH a4)
		{
			return ((::RPG::GameCore::AbilityElationEchoPointChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_OriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_ORIGINMODIFYVALUE_OFFSET))(this);
		}

		::System::Void set_OriginModifyValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_ORIGINMODIFYVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEVALUE_OFFSET))(this, a1);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_TARGETENTITY_OFFSET))(this, a1);
		}

	};
}
