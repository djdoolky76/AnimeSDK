#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NBDLJECLJJO;

#define MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x14CD2810)
#define MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x14CD2820)
#define MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD2830)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallSkinRowWidgetController_Data_TypeDefinitionIndex = 88696;

	class UIShoppingMallSkinRowWidgetController_Data : public ::System::Object
	{
	public:
		::NBDLJECLJJO* _GoodsData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::NBDLJECLJJO* get_GoodsData()
		{
			return ((::NBDLJECLJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::NBDLJECLJJO* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
