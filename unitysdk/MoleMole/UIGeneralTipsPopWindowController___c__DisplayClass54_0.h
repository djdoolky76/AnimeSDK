#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HGAJKHIMKJP;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C31010)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x19C31020)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__1_OFFSET UNITYSDK_OFFSET(0x19C312B0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__2_OFFSET UNITYSDK_OFFSET(0x19C31610)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__3_OFFSET UNITYSDK_OFFSET(0x19C31770)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass54_0_TypeDefinitionIndex = 73790;

	class UIGeneralTipsPopWindowController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::HGAJKHIMKJP*>* __9__3; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x18
		::System::Action_2<::System::Int32, ::System::Int32>* onSelectedCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitSelectItemList_b__0(::LIBOIKJGAIH binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitSelectItemList_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__1_OFFSET))(this);
		}

		::System::Void _InitSelectItemList_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__2_OFFSET))(this);
		}

		::System::Boolean _InitSelectItemList_b__3(::HGAJKHIMKJP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__INITSELECTITEMLIST_B__3_OFFSET))(this, x);
		}
	};
}
