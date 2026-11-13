#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x209764A0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ALLOWDUPLICATES_OFFSET UNITYSDK_OFFSET(0x209764D0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_CUSTOMTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x209765B0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWBOXFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x20976530)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWCLASSFOLDOUT_OFFSET UNITYSDK_OFFSET(0x20976590)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x20976510)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASCUSTOMTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x209765E0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASONTYPESSELECTED_OFFSET UNITYSDK_OFFSET(0x20976620)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20976570)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECLASSLABEL_OFFSET UNITYSDK_OFFSET(0x20976550)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDEREFERENCEPICKER_OFFSET UNITYSDK_OFFSET(0x209764F0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ONTYPESSELECTED_OFFSET UNITYSDK_OFFSET(0x209765F0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ALLOWDUPLICATES_OFFSET UNITYSDK_OFFSET(0x209764E0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_CUSTOMTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x209765C0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWBOXFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x20976540)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWCLASSFOLDOUT_OFFSET UNITYSDK_OFFSET(0x209765A0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x20976520)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x20976580)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECLASSLABEL_OFFSET UNITYSDK_OFFSET(0x20976560)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDEREFERENCEPICKER_OFFSET UNITYSDK_OFFSET(0x20976500)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ONTYPESSELECTED_OFFSET UNITYSDK_OFFSET(0x20976600)

namespace OdinExt
{
	inline static constexpr unsigned int SubclassSelectorAttribute_TypeDefinitionIndex = 46198;

	class SubclassSelectorAttribute : public ::System::Attribute
	{
	public:
		::System::String* _onTypesSelected; // 0x10
		::System::String* _customTypeFilter; // 0x18
		::System::Boolean _AllowDuplicates_k__BackingField; // 0x20
		::System::Boolean _HideReferencePicker_k__BackingField; // 0x21
		::System::Boolean _DrawBoxForListElements_k__BackingField; // 0x22
		::System::Boolean _HideClassLabel_k__BackingField; // 0x23
		::System::Boolean _DrawClassFoldout_k__BackingField; // 0x24
		::System::Boolean _DrawDropdownForListElements_k__BackingField; // 0x25
		::System::Boolean _hasCustomTypeFilter; // 0x26
		::System::Boolean _hasOnTypesSelected; // 0x27
		::System::Boolean _HideChildProperties_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowDuplicates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ALLOWDUPLICATES_OFFSET))(this);
		}

		::System::Void set_AllowDuplicates(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ALLOWDUPLICATES_OFFSET))(this, a1);
		}

		::System::Boolean get_HideReferencePicker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDEREFERENCEPICKER_OFFSET))(this);
		}

		::System::Void set_HideReferencePicker(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDEREFERENCEPICKER_OFFSET))(this, a1);
		}

		::System::Boolean get_DrawDropdownForListElements()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET))(this);
		}

		::System::Void set_DrawDropdownForListElements(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET))(this, a1);
		}

		::System::Boolean get_DrawBoxForListElements()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWBOXFORLISTELEMENTS_OFFSET))(this);
		}

		::System::Void set_DrawBoxForListElements(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWBOXFORLISTELEMENTS_OFFSET))(this, a1);
		}

		::System::Boolean get_HideClassLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECLASSLABEL_OFFSET))(this);
		}

		::System::Void set_HideClassLabel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECLASSLABEL_OFFSET))(this, a1);
		}

		::System::Boolean get_HideChildProperties()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECHILDPROPERTIES_OFFSET))(this);
		}

		::System::Void set_HideChildProperties(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECHILDPROPERTIES_OFFSET))(this, a1);
		}

		::System::Boolean get_DrawClassFoldout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWCLASSFOLDOUT_OFFSET))(this);
		}

		::System::Void set_DrawClassFoldout(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWCLASSFOLDOUT_OFFSET))(this, a1);
		}

		::System::String* get_CustomTypeFilter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_CUSTOMTYPEFILTER_OFFSET))(this);
		}

		::System::Void set_CustomTypeFilter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_CUSTOMTYPEFILTER_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCustomTypeFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASCUSTOMTYPEFILTER_OFFSET))(this);
		}

		::System::String* get_OnTypesSelected()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ONTYPESSELECTED_OFFSET))(this);
		}

		::System::Void set_OnTypesSelected(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ONTYPESSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOnTypesSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASONTYPESSELECTED_OFFSET))(this);
		}

	};
}
