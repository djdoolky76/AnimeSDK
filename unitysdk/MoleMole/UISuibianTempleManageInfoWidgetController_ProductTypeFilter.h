#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x167D9390)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x167D9570)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_ProductTypeFilter_TypeDefinitionIndex = 59417;

	class UISuibianTempleManageInfoWidgetController_ProductTypeFilter : public ::System::Object
	{
	public:
		::System::Int32 ProductType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate(::OAOFCEFPEHP* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
