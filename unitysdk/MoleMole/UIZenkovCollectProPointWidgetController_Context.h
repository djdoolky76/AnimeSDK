#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GCKHOGBDJHK;
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BF6FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectProPointWidgetController_Context_TypeDefinitionIndex = 65411;

	class UIZenkovCollectProPointWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::System::Int32>* CurrentTabCollectedCount; // 0x28
		::GCKHOGBDJHK* Config; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
