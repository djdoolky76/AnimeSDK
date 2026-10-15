#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowFrameCaptureUI; }

#define RPG_GAMECORE_SHOWFRAMECAPTUREUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF420)
#define RPG_GAMECORE_SHOWFRAMECAPTUREUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAF440)
#define RPG_GAMECORE_SHOWFRAMECAPTUREUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAF3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFrameCaptureUI_TypeDefinitionIndex = 23230;

	class ShowFrameCaptureUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FrameCaptureFadeoutType Type; // 0x18
		::System::Single Delay; // 0x1C
		::System::Single FadeDuration; // 0x20
		::System::Boolean UseRecord; // 0x24
		::System::Boolean MultiCaptureAllowed; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFRAMECAPTUREUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFrameCaptureUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFrameCaptureUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFRAMECAPTUREUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFrameCaptureUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFrameCaptureUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFRAMECAPTUREUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
