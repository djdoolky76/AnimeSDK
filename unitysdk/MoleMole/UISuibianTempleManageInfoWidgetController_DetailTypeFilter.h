#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLCDHJKFIO.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x17177A40)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17177A30)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_DetailTypeFilter_TypeDefinitionIndex = 59413;

	class UISuibianTempleManageInfoWidgetController_DetailTypeFilter : public ::System::Object
	{
	public:
		::ADLCDHJKFIO detailType; // 0x10

		::System::Void _ctor(::ADLCDHJKFIO detailType)
		{
			return ((::System::Void(*)(::PVOID, ::ADLCDHJKFIO))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER__CTOR_OFFSET))(this, detailType);
		}

		::System::Boolean Predicate(::OAOFCEFPEHP* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_DETAILTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
