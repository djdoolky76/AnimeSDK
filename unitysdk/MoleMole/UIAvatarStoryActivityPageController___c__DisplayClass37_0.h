#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPDNMFONAEH;
namespace MoleMole { class UIAvatarStoryActivityPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1917B200)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__ONENTEROVA_B__0_OFFSET UNITYSDK_OFFSET(0x1917B210)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__ONENTEROVA_B__1_OFFSET UNITYSDK_OFFSET(0x1917B440)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__ONENTEROVA_B__3_OFFSET UNITYSDK_OFFSET(0x1917B530)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController___c__DisplayClass37_0_TypeDefinitionIndex = 83298;

	class UIAvatarStoryActivityPageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* __9__1; // 0x10
		::System::Action_1<::System::Boolean>* __9__3; // 0x18
		::PPDNMFONAEH* value; // 0x20
		::MoleMole::UIAvatarStoryActivityPageController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterOVA_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__ONENTEROVA_B__0_OFFSET))(this);
		}

		::System::Void _OnEnterOVA_b__1(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__ONENTEROVA_B__1_OFFSET))(this, _);
		}

		::System::Void _OnEnterOVA_b__3(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS37_0__ONENTEROVA_B__3_OFFSET))(this, _);
		}
	};
}
