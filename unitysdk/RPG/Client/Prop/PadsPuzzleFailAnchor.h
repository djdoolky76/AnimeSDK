#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE7BF7B0)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_INITSTATE_OFFSET UNITYSDK_OFFSET(0xE7BF660)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xE7BF6F0)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xE7BF770)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xE7BF730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleFailAnchor_TypeDefinitionIndex = 81477;

	class PadsPuzzleFailAnchor : public ::RPG::Client::Prop::PadsPuzzlePadBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLERESET_OFFSET))(this);
		}

	};
}
