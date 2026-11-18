#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIBEBJMLHID;
namespace MoleMole { class UICoopPageController; }

#define MOLEMOLE_UICOOPPAGECONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D49800)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopPageController___c__DisplayClass32_0_TypeDefinitionIndex = 48004;

	class UICoopPageController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopPageController* __4__this; // 0x10
		::AIBEBJMLHID* questCfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPPAGECONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}
	};
}
