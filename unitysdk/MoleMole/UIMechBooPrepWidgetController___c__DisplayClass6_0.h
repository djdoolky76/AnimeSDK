#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIDAMPAOGK;
namespace MoleMole { class UIMechBooPrepWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C76990)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17C769A0)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17C769D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 92200;

	class UIMechBooPrepWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::HGIDAMPAOGK* levelInfo; // 0x10
		::MoleMole::UIMechBooPrepWidgetController* __4__this; // 0x18
		::System::Action_1<::HGIDAMPAOGK*>* onClickScriptBtn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET))(this, timeWidget);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
