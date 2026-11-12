#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRF_REQUIREDFIELDATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200247E0)
#define SRF_REQUIREDFIELDATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x200247D0)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x20024810)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOSEARCH_OFFSET UNITYSDK_OFFSET(0x200247F0)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_EDITORONLY_OFFSET UNITYSDK_OFFSET(0x20024830)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x20024820)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOSEARCH_OFFSET UNITYSDK_OFFSET(0x20024800)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_EDITORONLY_OFFSET UNITYSDK_OFFSET(0x20024840)

namespace SRF
{
	inline static constexpr unsigned int RequiredFieldAttribute_TypeDefinitionIndex = 36290;

	class RequiredFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _editorOnly; // 0x10
		::System::Boolean _autoCreate; // 0x11
		::System::Boolean _autoSearch; // 0x12
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_AutoSearch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOSEARCH_OFFSET))(this);
		}

		::System::Void set_AutoSearch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOSEARCH_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOCREATE_OFFSET))(this);
		}

		::System::Void set_AutoCreate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOCREATE_OFFSET))(this, a1);
		}

		::System::Boolean get_EditorOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_EDITORONLY_OFFSET))(this);
		}

		::System::Void set_EditorOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_EDITORONLY_OFFSET))(this, a1);
		}

	};
}
