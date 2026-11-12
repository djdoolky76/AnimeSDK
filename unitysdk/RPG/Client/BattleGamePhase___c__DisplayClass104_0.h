#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOGBCMFMAGC;

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD196C80)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xD19EEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass104_0_TypeDefinitionIndex = 62340;

	class BattleGamePhase___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::MOGBCMFMAGC* frameCapturePage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerFrameCapturePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS104_0__TRIGGERFRAMECAPTUREPAGE_B__0_OFFSET))(this);
		}

	};
}
