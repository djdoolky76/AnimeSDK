#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1FB82F90)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1FB82FA0)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB82FB0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValueDropdownAttribute_TypeDefinitionIndex = 7390;

	class ValueDropdownAttribute : public ::System::Attribute
	{
	public:
		::System::String* DropdownTitle; // 0x10
		::System::String* ValuesGetter; // 0x18
		::System::Boolean HideChildProperties; // 0x20
		::System::Boolean ExcludeExistingValuesInList; // 0x21
		::System::Boolean DisableGUIInAppendedDrawer; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 NumberOfItemsBeforeEnablingSearch; // 0x24
		::System::Boolean AppendNextDrawer; // 0x28
		::System::Boolean FlattenTreeView; // 0x29
		::System::Boolean IsUniqueList; // 0x2A
		::System::Boolean SortDropdownItems; // 0x2B
		::System::Int32 DropdownWidth; // 0x2C
		::System::Int32 DropdownHeight; // 0x30
		::System::Boolean ExpandAllMenuItems; // 0x34
		::System::Boolean DrawDropdownForListElements; // 0x35
		::System::Boolean DoubleClickToConfirm; // 0x36
		::System::Boolean DisableListAddButtonBehaviour; // 0x37

		::System::Void _ctor(::System::String* valuesGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE__CTOR_OFFSET))(this, valuesGetter);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
