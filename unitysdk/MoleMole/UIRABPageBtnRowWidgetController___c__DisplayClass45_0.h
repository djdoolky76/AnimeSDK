#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGNDMGPJGDJ_OJOEFLFHKKB;

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1677C250)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__REFRESHSTAGEPROGRESS_G__APPLYPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x1677C260)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c__DisplayClass45_0_TypeDefinitionIndex = 55247;

	class UIRABPageBtnRowWidgetController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::BGNDMGPJGDJ_OJOEFLFHKKB* lvInfoView; // 0x10
		::System::Single endFill; // 0x18
		::System::Single endRotate; // 0x1C
		::System::Single startFill; // 0x20
		::System::Single startRotate; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshStageProgress_g__ApplyProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS45_0__REFRESHSTAGEPROGRESS_G__APPLYPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
