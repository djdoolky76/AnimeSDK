#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class EFBMBOCNAJI_1;
template <typename T> class LGFJMNEABJP_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A3FEE10)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x1A3FEED0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_STORELIST_OFFSET UNITYSDK_OFFSET(0x1A3FEEB0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A3FEEF0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A3FEE20)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x1A3FEEE0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_STORELIST_OFFSET UNITYSDK_OFFSET(0x1A3FEEC0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FED70)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A3FF090)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_1_OFFSET UNITYSDK_OFFSET(0x1A3FF0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianWidgetController_ViewModel_TypeDefinitionIndex = 75834;

	class UIHandBookSuibianWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Int32>* _level; // 0x88
		::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::Object*>*>* _RowDataList_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* _rowDataList; // 0x98
		::LGFJMNEABJP_1<::System::Object*>* _StoreList_k__BackingField; // 0xA0

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::LJHFMILANJA_1<::System::Int32>* get_Level()
		{
			return ((::LJHFMILANJA_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::LJHFMILANJA_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_LEVEL_OFFSET))(this, value);
		}

		::LGFJMNEABJP_1<::System::Object*>* get_StoreList()
		{
			return ((::LGFJMNEABJP_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_STORELIST_OFFSET))(this);
		}

		::System::Void set_StoreList(::LGFJMNEABJP_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LGFJMNEABJP_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_STORELIST_OFFSET))(this, value);
		}

		::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::Object*>*>* get_RowDataList()
		{
			return ((::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_ROWDATALIST_OFFSET))(this);
		}

		::System::Void set_RowDataList(::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::Object*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::Object*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_ROWDATALIST_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _OnCreateProperty_b__14_0()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_0_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__14_1(::System::Collections::Generic::List_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_1_OFFSET))(this, value);
		}
	};
}
