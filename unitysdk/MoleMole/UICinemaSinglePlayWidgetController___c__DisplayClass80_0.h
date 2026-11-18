#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/Object.h"

class BJKJAPBBLBB;
class GKAOENLGBBI;
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1984EB60)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x1984EB70)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x1984ED30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x1984EE30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0x1984EF60)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0x1984ECE0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__5_OFFSET UNITYSDK_OFFSET(0x1984EDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass80_0_TypeDefinitionIndex = 46775;

	class UICinemaSinglePlayWidgetController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::GKAOENLGBBI* controllerView; // 0x18
		::BJKJAPBBLBB* bubbleEvent; // 0x20
		::System::Action* __9__4; // 0x28
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x30
		::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowSuperBubble_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__4_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__5_OFFSET))(this);
		}

		::System::Void _ShowSuperBubble_b__2(::System::Boolean isFinalClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__2_OFFSET))(this, isFinalClick);
		}

		::System::Void _ShowSuperBubble_b__3(::System::Boolean isImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS80_0__SHOWSUPERBUBBLE_B__3_OFFSET))(this, isImmediate);
		}
	};
}
