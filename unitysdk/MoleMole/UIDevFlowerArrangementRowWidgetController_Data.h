#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPGKAHKNJIP;

#define MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_GET_FLOWERFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x15990BB0)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_SET_FLOWERFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x15990BC0)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15990BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevFlowerArrangementRowWidgetController_Data_TypeDefinitionIndex = 39140;

	class UIDevFlowerArrangementRowWidgetController_Data : public ::System::Object
	{
	public:
		::PPGKAHKNJIP* _FlowerFeatureData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::PPGKAHKNJIP* get_FlowerFeatureData()
		{
			return ((::PPGKAHKNJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_GET_FLOWERFEATUREDATA_OFFSET))(this);
		}

		::System::Void set_FlowerFeatureData(::PPGKAHKNJIP* value)
		{
			return ((::System::Void(*)(::PVOID, ::PPGKAHKNJIP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_SET_FLOWERFEATUREDATA_OFFSET))(this, value);
		}
	};
}
