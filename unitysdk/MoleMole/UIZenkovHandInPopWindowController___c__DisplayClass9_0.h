#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIZenkovHandInPopWindowController; }

#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__APPLYZENKOVITEMINFOTOWISHLIST_B__0_OFFSET UNITYSDK_OFFSET(0x14E4AB60)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4AB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovHandInPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 67769;

	class UIZenkovHandInPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovHandInPopWindowController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyZenkovItemInfoToWishList_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__APPLYZENKOVITEMINFOTOWISHLIST_B__0_OFFSET))(this, ctrl);
		}
	};
}
