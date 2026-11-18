#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDFMOBLBPGH.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x14820570)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14820560)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_ResearchTabTypeFilter_TypeDefinitionIndex = 59418;

	class UISuibianTempleManageInfoWidgetController_ResearchTabTypeFilter : public ::System::Object
	{
	public:
		::EDFMOBLBPGH researchTabType; // 0x10

		::System::Void _ctor(::EDFMOBLBPGH researchTabType)
		{
			return ((::System::Void(*)(::PVOID, ::EDFMOBLBPGH))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER__CTOR_OFFSET))(this, researchTabType);
		}

		::System::Boolean Predicate(::OAOFCEFPEHP* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
