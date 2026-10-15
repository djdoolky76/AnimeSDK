#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverridePerformanceEndScreenCut; }

#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E8D50)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E8D60)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E8D20)

namespace RPG::GameCore
{
	class OverridePerformanceEndScreenCut : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EndWithScreenCut; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverridePerformanceEndScreenCut* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverridePerformanceEndScreenCut*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverridePerformanceEndScreenCut* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverridePerformanceEndScreenCut*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
