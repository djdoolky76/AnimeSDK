#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebPictureBookPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAD800)
#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__PLAYPENDINGROWANIMATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x16EADD90)
#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__PLAYPENDINGROWANIMATIONS_B__1_OFFSET UNITYSDK_OFFSET(0x16EADDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookPopWindowController___c__DisplayClass35_0_TypeDefinitionIndex = 51600;

	class UIBangbooMicroWebPictureBookPopWindowController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebPictureBookPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* pending; // 0x18
		::System::Int32 startIndex; // 0x20
		::MoleMole::UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim anim; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPendingRowAnimations_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__PLAYPENDINGROWANIMATIONS_B__0_OFFSET))(this);
		}

		::System::Void _PlayPendingRowAnimations_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS35_0__PLAYPENDINGROWANIMATIONS_B__1_OFFSET))(this);
		}
	};
}
