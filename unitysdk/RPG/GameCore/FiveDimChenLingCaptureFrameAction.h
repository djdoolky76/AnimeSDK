#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimChenLingCaptureFrameAction; }

#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B43D0)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B43E0)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B4360)

namespace RPG::GameCore
{
	class FiveDimChenLingCaptureFrameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
