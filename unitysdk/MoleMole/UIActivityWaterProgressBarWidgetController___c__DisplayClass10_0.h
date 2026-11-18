#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYWATERPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31DFF0)
#define MOLEMOLE_UIACTIVITYWATERPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x1A31E000)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterProgressBarWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 69460;

	class UIActivityWaterProgressBarWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* rewardList; // 0x10
		::MoleMole::UIActivityWaterProgressBarWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__0_OFFSET))(this);
		}
	};
}
