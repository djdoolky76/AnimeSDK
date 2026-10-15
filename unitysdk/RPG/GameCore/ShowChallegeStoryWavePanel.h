#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowChallegeStoryWavePanel; }

#define RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9DE0)
#define RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9DF0)
#define RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD9DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowChallegeStoryWavePanel_TypeDefinitionIndex = 23463;

	class ShowChallegeStoryWavePanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowChallegeStoryWavePanel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowChallegeStoryWavePanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowChallegeStoryWavePanel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowChallegeStoryWavePanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCHALLEGESTORYWAVEPANEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
