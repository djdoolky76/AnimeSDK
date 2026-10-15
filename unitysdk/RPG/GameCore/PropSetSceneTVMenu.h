#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropSetSceneTVMenu; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETSCENETVMENU_CTOR_OFFSET UNITYSDK_OFFSET(0x1D926AF0)
#define RPG_GAMECORE_PROPSETSCENETVMENU_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D926B20)
#define RPG_GAMECORE_PROPSETSCENETVMENU_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D926AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetSceneTVMenu_TypeDefinitionIndex = 21974;

	class PropSetSceneTVMenu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MenuID; // 0x20
		::RPG::GameCore::DynamicString* TVKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETSCENETVMENU_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetSceneTVMenu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetSceneTVMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETSCENETVMENU_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetSceneTVMenu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetSceneTVMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETSCENETVMENU_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
