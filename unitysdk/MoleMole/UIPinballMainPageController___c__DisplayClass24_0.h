#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPinballMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPINBALLMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D28330)
#define MOLEMOLE_UIPINBALLMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__PLAYFADEOUTANDDO_G__ONFADEOUTFINISH_0_OFFSET UNITYSDK_OFFSET(0x15D28340)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballMainPageController___c__DisplayClass24_0_TypeDefinitionIndex = 59542;

	class UIPinballMainPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPinballMainPageController* __4__this; // 0x10
		::System::Action* onFadeOutFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAndDo_g__OnFadeOutFinish_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__PLAYFADEOUTANDDO_G__ONFADEOUTFINISH_0_OFFSET))(this);
		}
	};
}
