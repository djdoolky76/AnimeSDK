#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelModfierBeginPerform; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1F64B0)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F65A0)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F6550)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F6500)
#define RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_INIT_OFFSET UNITYSDK_OFFSET(0xF1F6460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelModfierBeginPerform_TypeDefinitionIndex = 58004;

	class LevelModfierBeginPerform : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelModfierBeginPerform* Init(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::LevelModfierBeginPerform*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODFIERBEGINPERFORM_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
