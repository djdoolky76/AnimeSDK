#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HGAJKHIMKJP;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS147_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1804CAC0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS147_0__INITREWARDITEMSSCROLLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1804CAD0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS147_0__INITREWARDITEMSSCROLLVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1804CBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass147_0_TypeDefinitionIndex = 73785;

	class UIGeneralTipsPopWindowController___c__DisplayClass147_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS147_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitRewardItemsScrollView_b__0(::LIBOIKJGAIH binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS147_0__INITREWARDITEMSSCROLLVIEW_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitRewardItemsScrollView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS147_0__INITREWARDITEMSSCROLLVIEW_B__1_OFFSET))(this);
		}
	};
}
