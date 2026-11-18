#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x1FB7F8D0)
#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_SET_PATHS_OFFSET UNITYSDK_OFFSET(0x1FB7F760)
#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7F950)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AssetSelectorAttribute_TypeDefinitionIndex = 7270;

	class AssetSelectorAttribute : public ::System::Attribute
	{
	public:
		::System::String* DropdownTitle; // 0x10
		::Il2CppArray<::System::String*>* SearchInFolders; // 0x18
		::System::String* Filter; // 0x20
		::System::Boolean DisableListAddButtonBehaviour; // 0x28
		::System::Boolean FlattenTreeView; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 DropdownWidth; // 0x2C
		::System::Int32 DropdownHeight; // 0x30
		::System::Boolean ExcludeExistingValuesInList; // 0x34
		::System::Boolean DrawDropdownForListElements; // 0x35
		::System::Boolean ExpandAllMenuItems; // 0x36
		::System::Boolean IsUniqueList; // 0x37

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_Paths(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_SET_PATHS_OFFSET))(this, value);
		}

		::System::String* get_Paths()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_GET_PATHS_OFFSET))(this);
		}
	};
}
