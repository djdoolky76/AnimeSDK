#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPDNMFONAEH;
namespace MoleMole { class UIAvatarStoryActivityPageController; }

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A22BE20)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS40_0__ONENTERSTORY_B__0_OFFSET UNITYSDK_OFFSET(0x1A22BE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController___c__DisplayClass40_0_TypeDefinitionIndex = 83300;

	class UIAvatarStoryActivityPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarStoryActivityPageController* __4__this; // 0x10
		::PPDNMFONAEH* entryData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterStory_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS40_0__ONENTERSTORY_B__0_OFFSET))(this);
		}
	};
}
