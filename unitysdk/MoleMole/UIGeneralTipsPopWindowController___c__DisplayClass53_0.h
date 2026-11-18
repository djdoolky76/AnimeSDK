#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HGAJKHIMKJP;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1804D340)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__0_OFFSET UNITYSDK_OFFSET(0x1804D350)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__1_OFFSET UNITYSDK_OFFSET(0x1804D3C0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__2_OFFSET UNITYSDK_OFFSET(0x1804D460)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__3_OFFSET UNITYSDK_OFFSET(0x1804D6F0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__4_OFFSET UNITYSDK_OFFSET(0x1804DA50)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__5_OFFSET UNITYSDK_OFFSET(0x1804DA60)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__6_OFFSET UNITYSDK_OFFSET(0x1804DD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass53_0_TypeDefinitionIndex = 73781;

	class UIGeneralTipsPopWindowController___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* ownItemFunc; // 0x10
		::System::Predicate_1<::HGAJKHIMKJP*>* __9__6; // 0x18
		::System::Func_2<::System::Int32, ::System::Boolean>* showInPackageTipsCallback; // 0x20
		::System::Action* startClick; // 0x28
		::System::Action_2<::System::Int32, ::System::Int32>* onSelectedCallback; // 0x30
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x38
		::System::Boolean sendReq; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 itemid; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitOptionGift_b__0(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__0_OFFSET))(this, itemID);
		}

		::System::Int32 _InitOptionGift_b__1(::HGAJKHIMKJP* itemA, ::HGAJKHIMKJP* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::HGAJKHIMKJP*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__1_OFFSET))(this, itemA, itemB);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitOptionGift_b__2(::LIBOIKJGAIH binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__2_OFFSET))(this, binderInfo);
		}

		::System::Void _InitOptionGift_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__3_OFFSET))(this);
		}

		::System::Void _InitOptionGift_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__4_OFFSET))(this);
		}

		::System::Void _InitOptionGift_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__5_OFFSET))(this);
		}

		::System::Boolean _InitOptionGift_b__6(::HGAJKHIMKJP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS53_0__INITOPTIONGIFT_B__6_OFFSET))(this, x);
		}
	};
}
