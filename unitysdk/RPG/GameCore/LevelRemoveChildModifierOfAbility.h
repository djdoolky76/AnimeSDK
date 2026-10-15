#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class MBBEBLGELAP;

#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EA010)
#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EA070)
#define RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EA020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRemoveChildModifierOfAbility_TypeDefinitionIndex = 56840;

	class LevelRemoveChildModifierOfAbility : public ::System::Object
	{
	public:
		::MBBEBLGELAP* AbilityInstance; // 0x10
		::System::Void _ctor(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREMOVECHILDMODIFIEROFABILITY_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
