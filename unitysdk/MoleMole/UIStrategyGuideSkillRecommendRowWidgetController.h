#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Foundation/AssetPath.h"

class DCBCOHEIODM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_JGNKGFGPOMP_OFFSET UNITYSDK_OFFSET(0x171679D0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17166F70)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17167000)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17166D10)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17166F00)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLICON_OFFSET UNITYSDK_OFFSET(0x17167080)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0x17167390)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_SETSKILLGOBTN_OFFSET UNITYSDK_OFFSET(0x17167550)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x171674E0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17167730)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17167790)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17167820)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171678B0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17167940)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillRecommendRowWidgetController_TypeDefinitionIndex = 59992;

	class UIStrategyGuideSkillRecommendRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::DCBCOHEIODM* _view; // 0x2C8
		::System::Action* ODJKJEPPNJM; // 0x2D0
		::System::Boolean KFGCLENJPPP; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshSkillIcon(::Foundation::AssetPath path, ::System::Boolean isTalent, ::System::UInt32 level, ::System::Int32 talentAddLevel, ::System::Boolean showMaxLevelRoot)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLICON_OFFSET))(this, path, isTalent, level, talentAddLevel, showMaxLevelRoot);
		}

		::System::Boolean RefreshSkillProgress(::Foundation::AssetPath path, ::System::Boolean isTalent, ::System::UInt32 currentLevel, ::System::UInt32 targetLevel, ::System::Int32 talentAddLevel, ::System::Boolean materialEnough, ::System::Boolean isOwned, ::System::Boolean showMaxLevelRoot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLPROGRESS_OFFSET))(this, path, isTalent, currentLevel, targetLevel, talentAddLevel, materialEnough, isOwned, showMaxLevelRoot);
		}

		::System::Void SetTipsActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_SETTIPSACTIVE_OFFSET))(this, active);
		}

		::System::Void SetSkillGoBtn(::System::Boolean show, ::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_SETSKILLGOBTN_OFFSET))(this, show, onClick);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JGNKGFGPOMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_JGNKGFGPOMP_OFFSET))(this);
		}
	};
}
