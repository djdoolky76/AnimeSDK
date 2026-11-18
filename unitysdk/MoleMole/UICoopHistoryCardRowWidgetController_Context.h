#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KPPPFKOCCEF;
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17570FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryCardRowWidgetController_Context_TypeDefinitionIndex = 63747;

	class UICoopHistoryCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::KPPPFKOCCEF*>* DisplayInfo; // 0x28
		::JIOLFCAGOFH_1<::System::Boolean>* ShowPlatformNameButtonHolding; // 0x30
		::System::Int32 Index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
