#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitLevelRewardPageShow; }

#define RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D5A0)
#define RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6D5B0)
#define RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6D570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLevelRewardPageShow_TypeDefinitionIndex = 21246;

	class WaitLevelRewardPageShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitExit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLevelRewardPageShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLevelRewardPageShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLevelRewardPageShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLevelRewardPageShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELREWARDPAGESHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
