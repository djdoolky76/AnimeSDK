#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PONBOHIGCJP_ABBGFEIBHKB;
class PONBOHIGCJP_CNBLLJPHHGB;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_GET_BARDATA_OFFSET UNITYSDK_OFFSET(0x18086960)
#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_GET_ONTRACKITEMCLICK_OFFSET UNITYSDK_OFFSET(0x18086980)
#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_GET_STOREDATA_OFFSET UNITYSDK_OFFSET(0x18086940)
#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_SET_BARDATA_OFFSET UNITYSDK_OFFSET(0x18086970)
#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_SET_ONTRACKITEMCLICK_OFFSET UNITYSDK_OFFSET(0x18086990)
#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_SET_STOREDATA_OFFSET UNITYSDK_OFFSET(0x18086950)
#define MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x180869A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyRowV2WidgetController_Data_TypeDefinitionIndex = 85816;

	class UIFashionStoreKeyRowV2WidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Int32>* keyID2BarTrackIndex; // 0x10
		::System::Action_1<::System::Object*>* _OnTrackItemClick_k__BackingField; // 0x18
		::PONBOHIGCJP_CNBLLJPHHGB* _StoreData_k__BackingField; // 0x20
		::PONBOHIGCJP_ABBGFEIBHKB* _barData_k__BackingField; // 0x28
		::System::Func_1<::System::Int32>* getBarTrackCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::PONBOHIGCJP_CNBLLJPHHGB* get_StoreData()
		{
			return ((::PONBOHIGCJP_CNBLLJPHHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_GET_STOREDATA_OFFSET))(this);
		}

		::System::Void set_StoreData(::PONBOHIGCJP_CNBLLJPHHGB* value)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_CNBLLJPHHGB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_SET_STOREDATA_OFFSET))(this, value);
		}

		::PONBOHIGCJP_ABBGFEIBHKB* get_barData()
		{
			return ((::PONBOHIGCJP_ABBGFEIBHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_GET_BARDATA_OFFSET))(this);
		}

		::System::Void set_barData(::PONBOHIGCJP_ABBGFEIBHKB* value)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_ABBGFEIBHKB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_SET_BARDATA_OFFSET))(this, value);
		}

		::System::Action_1<::System::Object*>* get_OnTrackItemClick()
		{
			return ((::System::Action_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_GET_ONTRACKITEMCLICK_OFFSET))(this);
		}

		::System::Void set_OnTrackItemClick(::System::Action_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWV2WIDGETCONTROLLER_DATA_SET_ONTRACKITEMCLICK_OFFSET))(this, value);
		}
	};
}
