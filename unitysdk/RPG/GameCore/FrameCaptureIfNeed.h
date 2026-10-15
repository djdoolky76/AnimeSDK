#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FrameCaptureIfNeed; }

#define RPG_GAMECORE_FRAMECAPTUREIFNEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4C90)
#define RPG_GAMECORE_FRAMECAPTUREIFNEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C4CA0)
#define RPG_GAMECORE_FRAMECAPTUREIFNEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C4C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameCaptureIfNeed_TypeDefinitionIndex = 22726;

	class FrameCaptureIfNeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitCaptureDone; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FrameCaptureIfNeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FrameCaptureIfNeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FrameCaptureIfNeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FrameCaptureIfNeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
