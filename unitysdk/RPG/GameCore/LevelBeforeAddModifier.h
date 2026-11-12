#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBeforeAddModifier; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xF1E4120)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1E40D0)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1E4080)
#define RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET UNITYSDK_OFFSET(0xF1E3F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBeforeAddModifier_TypeDefinitionIndex = 57997;

	class LevelBeforeAddModifier : public ::CMPGEAFHHDC
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::TurnBasedModifierConfig* ModifierConfig; // 0x20
		::RPG::GameCore::GameEntity* Receiver; // 0x28
		::RPG::GameCore::GameEntity* Caster; // 0x30
		::System::String* ModifierName; // 0x38
		::CHMCAGBDPJH ChangeParams; // 0x40
		::System::Boolean IsSuccess; // 0x158
		::System::Boolean DisableFloatingMessage; // 0x159
		::System::Byte _padding0[0x2];
		::System::Int32 LifeTime; // 0x15C
		::RPG::GameCore::FixPoint Chance; // 0x160
		::RPG::GameCore::FixPoint BaseChance; // 0x168
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBeforeAddModifier* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedModifierConfig* a3, ::System::String* a4, ::System::String* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::System::Boolean a8, ::System::Int32 a9, ::CHMCAGBDPJH a10, ::System::Boolean a11)
		{
			return ((::RPG::GameCore::LevelBeforeAddModifier*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierConfig*, ::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean, ::System::Int32, ::CHMCAGBDPJH, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBEFOREADDMODIFIER_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
