#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__CTOR_OFFSET UNITYSDK_OFFSET(0x197A7920)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONTRACKBTNCLICKHANDLE_B__5_OFFSET UNITYSDK_OFFSET(0x197A7930)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONTRACKBTNCLICKHANDLE_B__6_OFFSET UNITYSDK_OFFSET(0x197A7B40)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONTRACKBTNCLICKHANDLE_B__7_OFFSET UNITYSDK_OFFSET(0x197A7BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c__DisplayClass36_1_TypeDefinitionIndex = 84571;

	template <typename T>
	class UIInterKnotMissionWidgetController___c__DisplayClass36_1 : public ::System::Object
	{
	public:
		::System::Action* __9__7; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Action* __9__6; // 0x20
		::System::Boolean openMapWithTip; // 0x28
		::System::Boolean autoWorld; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__5(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONTRACKBTNCLICKHANDLE_B__5_OFFSET))(this, b);
		}

		::System::Void _OnTrackBtnClickHandle_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONTRACKBTNCLICKHANDLE_B__6_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONTRACKBTNCLICKHANDLE_B__7_OFFSET))(this);
		}
	};
}
