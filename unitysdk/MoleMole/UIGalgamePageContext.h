#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKOCHHBGBGC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B001790)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageContext_TypeDefinitionIndex = 79897;

	class UIGalgamePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TitleKey; // 0x28
		::System::Action* executeWhenFadeOutStartAction; // 0x30
		::System::String* IntroKey; // 0x38
		::System::Action* startOutsideFadeOutAction; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* ExitSoundActionList; // 0x48
		::System::String* FadeOutParam; // 0x50
		::System::String* FadeInParam; // 0x58
		::System::String* UIPlayMode; // 0x60
		::EKOCHHBGBGC SwitchSceneOnStart; // 0x68
		::System::Int32 PerformId; // 0x6C
		::System::Boolean useProtectTime; // 0x70
		::System::Boolean UseWhiteMaskFadeIn; // 0x71
		::System::Boolean overrideFadeOutByOuside; // 0x72
		::System::Boolean UseWhiteMaskFadeOut; // 0x73

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
