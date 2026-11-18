#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIBANGBOOMICROWEBMAINPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18060920)
#define MOLEMOLE_UIBANGBOOMICROWEBMAINPAGECONTROLLER___C__DISPLAYCLASS26_0__PLAYFADEOUTANDDO_G__ONFADEOUTFINISH_0_OFFSET UNITYSDK_OFFSET(0x18060930)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebMainPageController___c__DisplayClass26_0_TypeDefinitionIndex = 69854;

	class UIBangbooMicroWebMainPageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebMainPageController* __4__this; // 0x10
		::System::Action* onFadeOutFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMAINPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAndDo_g__OnFadeOutFinish_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMAINPAGECONTROLLER___C__DISPLAYCLASS26_0__PLAYFADEOUTANDDO_G__ONFADEOUTFINISH_0_OFFSET))(this);
		}
	};
}
