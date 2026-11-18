#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

class BHJBJDALADJ_DJMEPLCJPBO;
class FNIPCMOBODO;
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A371910)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x1A371920)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x1A371B80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x1A371C80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0x1A371B00)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0x1A371C30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__5_OFFSET UNITYSDK_OFFSET(0x1A372000)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass72_0_TypeDefinitionIndex = 46769;

	class UICinemaSinglePlayWidgetController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x10
		::FNIPCMOBODO* bubbleWidget; // 0x18
		::BHJBJDALADJ_DJMEPLCJPBO* locationView; // 0x20
		::System::Action* __9__3; // 0x28
		::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick; // 0x30
		::System::Action* __9__5; // 0x38
		::System::Action* __9__4; // 0x40
		::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item; // 0x48
		::System::Int32 bubbleLocation; // 0x58
		::System::Boolean isRightSide; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowNormalBubble_b__0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__0_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__3_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__4_OFFSET))(this);
		}

		::System::Void _ShowNormalBubble_b__2(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__2_OFFSET))(this, _);
		}

		::System::Void _ShowNormalBubble_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS72_0__SHOWNORMALBUBBLE_B__5_OFFSET))(this);
		}
	};
}
