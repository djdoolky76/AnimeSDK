#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLHLFBPHCCN;
namespace MoleMole { class UIMiniscapeMissionPageController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183F87D0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABS_B__1_OFFSET UNITYSDK_OFFSET(0x183F87E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMissionPageController___c__DisplayClass10_0_TypeDefinitionIndex = 47638;

	class UIMiniscapeMissionPageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeMissionPageController* __4__this; // 0x10
		::NLHLFBPHCCN* chapterConfig; // 0x18
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabs_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABS_B__1_OFFSET))(this);
		}
	};
}
