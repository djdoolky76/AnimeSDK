#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace RPG::GameCore { class WaitUIOnTop; }

#define RPG_GAMECORE_WAITUIONTOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA4CA0)
#define RPG_GAMECORE_WAITUIONTOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA4CB0)
#define RPG_GAMECORE_WAITUIONTOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA4C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIOnTop_TypeDefinitionIndex = 24381;

	class WaitUIOnTop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialGuideUIContextConfig* TargetUI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIONTOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIOnTop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIOnTop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIONTOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIOnTop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIOnTop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIONTOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
