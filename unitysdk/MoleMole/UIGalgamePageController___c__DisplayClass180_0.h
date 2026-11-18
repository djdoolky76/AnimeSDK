#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCIMMDDIFBJ;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1836F990)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__GENERATEWHITESCREENSHAKEPLAYITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1836F9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass180_0_TypeDefinitionIndex = 44785;

	class UIGalgamePageController___c__DisplayClass180_0 : public ::System::Object
	{
	public:
		::GCIMMDDIFBJ* stageAnim; // 0x10
		::System::String* audioEventID; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::System::Int32 realIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateWhiteScreenShakePlayItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS180_0__GENERATEWHITESCREENSHAKEPLAYITEM_B__0_OFFSET))(this);
		}
	};
}
