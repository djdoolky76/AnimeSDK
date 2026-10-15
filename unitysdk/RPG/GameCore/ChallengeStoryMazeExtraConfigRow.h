#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengeStoryMazeExtraConfigRow; }

#define RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D535C90)
#define RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D535AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryMazeExtraConfigRow_TypeDefinitionIndex = 12993;

	class ChallengeStoryMazeExtraConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleTargetID; // 0x10
		::System::UInt32 TurnLimit; // 0x18
		::System::UInt32 ClearScore; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYMAZEEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
