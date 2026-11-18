#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKNAKAOIGHJ;
class LKFLEAOHCNL;

#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1917B1A0)
#define MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__ONENTERSPECIALENTRY_B__1_OFFSET UNITYSDK_OFFSET(0x1917B1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStoryActivityPageController___c__DisplayClass35_1_TypeDefinitionIndex = 83301;

	template <typename T>
	class UIAvatarStoryActivityPageController___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::IKNAKAOIGHJ* levelData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnterSpecialEntry_b__1(::LKFLEAOHCNL* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFLEAOHCNL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYACTIVITYPAGECONTROLLER___C__DISPLAYCLASS35_1__ONENTERSPECIALENTRY_B__1_OFFSET))(this, match);
		}
	};
}
