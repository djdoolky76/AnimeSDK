#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
class ENLNFBCDEIO;

#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCA1430)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCA13F0)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDCA13A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DummyPuzzleBoard_TypeDefinitionIndex = 78575;

	class DummyPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::ENLNFBCDEIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENLNFBCDEIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

	};
}
