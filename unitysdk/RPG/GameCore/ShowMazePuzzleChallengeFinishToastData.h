#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOASTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x12035420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazePuzzleChallengeFinishToastData_TypeDefinitionIndex = 54439;

	class ShowMazePuzzleChallengeFinishToastData : public ::System::Object
	{
	public:
		::System::Boolean IsPuzzle; // 0x10
		::System::Boolean IsSuccess; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEPUZZLECHALLENGEFINISHTOASTDATA_CTOR_OFFSET))(this);
		}

	};
}
