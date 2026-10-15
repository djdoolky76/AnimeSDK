#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepTutorialPopupPanelType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialPopupPanelVisibleParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B180)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73AD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialPopupPanelVisibleParam_TypeDefinitionIndex = 19968;

	class GridFightPrepTutorialPopupPanelVisibleParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GridFightPrepTutorialPopupPanelType PopupPanelType; // 0x10
		::System::Boolean Visible; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialPopupPanelVisibleParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialPopupPanelVisibleParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
