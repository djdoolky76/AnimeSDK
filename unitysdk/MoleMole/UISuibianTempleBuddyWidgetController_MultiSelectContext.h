#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class EFBMBOCNAJI_1;
template <typename T> class KLIOMMIOFDC_1;

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0x13B031E0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_GET_SELECTUIDLIST_OFFSET UNITYSDK_OFFSET(0x13B03220)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_GET_SHOWMULTISELECTINDEX_OFFSET UNITYSDK_OFFSET(0x13B03200)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13B03240)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_SET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0x13B031F0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_SET_SELECTUIDLIST_OFFSET UNITYSDK_OFFSET(0x13B03230)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_SET_SHOWMULTISELECTINDEX_OFFSET UNITYSDK_OFFSET(0x13B03210)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B03360)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT__ONCREATEPROPERTY_B__14_0_OFFSET UNITYSDK_OFFSET(0x13B033D0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT__ONCREATEPROPERTY_B__14_1_OFFSET UNITYSDK_OFFSET(0x13B033E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyWidgetController_MultiSelectContext_TypeDefinitionIndex = 52798;

	class UISuibianTempleBuddyWidgetController_MultiSelectContext : public ::JJEJBPGJPJN
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* SetMultiMask; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _selectedIndexList; // 0x90
		::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _SelectUidList_k__BackingField; // 0x98
		::KLIOMMIOFDC_1<::System::Boolean>* _IsMultiSelect_k__BackingField; // 0xA0
		::KLIOMMIOFDC_1<::System::Boolean>* _ShowMultiSelectIndex_k__BackingField; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::KLIOMMIOFDC_1<::System::Boolean>* get_IsMultiSelect()
		{
			return ((::KLIOMMIOFDC_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_GET_ISMULTISELECT_OFFSET))(this);
		}

		::System::Void set_IsMultiSelect(::KLIOMMIOFDC_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_SET_ISMULTISELECT_OFFSET))(this, value);
		}

		::KLIOMMIOFDC_1<::System::Boolean>* get_ShowMultiSelectIndex()
		{
			return ((::KLIOMMIOFDC_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_GET_SHOWMULTISELECTINDEX_OFFSET))(this);
		}

		::System::Void set_ShowMultiSelectIndex(::KLIOMMIOFDC_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_SET_SHOWMULTISELECTINDEX_OFFSET))(this, value);
		}

		::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::UInt32>*>* get_SelectUidList()
		{
			return ((::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_GET_SELECTUIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectUidList(::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::EFBMBOCNAJI_1<::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_SET_SELECTUIDLIST_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _OnCreateProperty_b__14_0()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT__ONCREATEPROPERTY_B__14_0_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__14_1(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_MULTISELECTCONTEXT__ONCREATEPROPERTY_B__14_1_OFFSET))(this, value);
		}
	};
}
