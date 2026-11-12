#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_CTOR_OFFSET UNITYSDK_OFFSET(0xE7BF920)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xE7BF7D0)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xE7BF830)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xE7BF8D0)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xE7BF880)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleNormalPad_TypeDefinitionIndex = 81480;

	class PadsPuzzleNormalPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLERESET_OFFSET))(this);
		}

	};
}
