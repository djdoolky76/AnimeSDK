#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/System/Object.h"

class BHJBJDALADJ_DJMEPLCJPBO;
namespace MoleMole { class UICinemaSingleBadBubbleWidgetController; }
namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17057390)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__1_OFFSET UNITYSDK_OFFSET(0x170573A0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__2_OFFSET UNITYSDK_OFFSET(0x170575B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__3_OFFSET UNITYSDK_OFFSET(0x17057540)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__4_OFFSET UNITYSDK_OFFSET(0x170577B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass78_0_TypeDefinitionIndex = 46768;

	class UICinemaSinglePlayWidgetController___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::MoleMole::UICinemaSingleBadBubbleWidgetController* bubbleWidget; // 0x10
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x18
		::System::Action* __9__4; // 0x20
		::System::Func_1<::System::Int32>* onClick; // 0x28
		::System::Action* __9__3; // 0x30
		::BHJBJDALADJ_DJMEPLCJPBO* locationView; // 0x38
		::System::Int32 bubbleLocation; // 0x40
		::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ShowBadBubble_b__1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__1_OFFSET))(this);
		}

		::System::Void _ShowBadBubble_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__3_OFFSET))(this);
		}

		::System::Void _ShowBadBubble_b__2(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__2_OFFSET))(this, _);
		}

		::System::Void _ShowBadBubble_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS78_0__SHOWBADBUBBLE_B__4_OFFSET))(this);
		}
	};
}
