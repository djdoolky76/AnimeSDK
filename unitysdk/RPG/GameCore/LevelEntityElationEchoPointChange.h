#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityElationEchoPointChange; }

#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E1E20)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E1D40)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E1CF0)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE6E1DD0)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE6E1DB0)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE6E1D90)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xE6E1E00)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6E1C30)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xE6E1DF0)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE6E1DC0)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xE6E1DA0)
#define RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xE6E1E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityElationEchoPointChange_TypeDefinitionIndex = 56760;

	class LevelEntityElationEchoPointChange : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x18
		::CHMCAGBDPJH _ChangeParams_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _OriginModifyValue_k__BackingField; // 0x130
		::RPG::GameCore::FixPoint _ChangeValue_k__BackingField; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityElationEchoPointChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::CHMCAGBDPJH a4)
		{
			return ((::RPG::GameCore::LevelEntityElationEchoPointChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_OriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_ORIGINMODIFYVALUE_OFFSET))(this);
		}

		::System::Void set_OriginModifyValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_ORIGINMODIFYVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_CHANGEVALUE_OFFSET))(this, a1);
		}

		::CHMCAGBDPJH get_ChangeParams()
		{
			return ((::CHMCAGBDPJH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::CHMCAGBDPJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_CHANGEPARAMS_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYELATIONECHOPOINTCHANGE_SET_TARGETENTITY_OFFSET))(this, a1);
		}

	};
}
