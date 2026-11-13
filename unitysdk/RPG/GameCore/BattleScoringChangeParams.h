#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringChangeParams_TypeDefinitionIndex = 59788;

	class BattleScoringChangeParams : public ::System::Object
	{
	public:
		::System::UInt32 ScoringId; // 0x10
		::System::Single OldScore; // 0x14
		::System::Boolean IsChallenge; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::ScoringShowType ShowType; // 0x20
		::System::Single DisplayOldScore; // 0x24
		::System::Single ModifyValue; // 0x28
		::System::Single NewScore; // 0x2C
		::System::Single DisplayNewScore; // 0x30
		::System::Single DisplayModifyValue; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCHANGEPARAMS_CTOR_OFFSET))(this);
		}

	};
}
