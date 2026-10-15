#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }
namespace System { class Type; }

#define CLGELFNKAFL_CTOR_OFFSET UNITYSDK_OFFSET(0xD778720)
#define CLGELFNKAFL_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0xD778700)
#define CLGELFNKAFL_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xD778710)

inline static constexpr unsigned int CLGELFNKAFL_TypeDefinitionIndex = 49035;

	class CLGELFNKAFL : public ::System::Attribute
	{
	public:
		::System::String* _Alias_k__BackingField; // 0x10
		::System::Type* _ComponentType_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLGELFNKAFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Alias()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGELFNKAFL_GET_ALIAS_OFFSET))(this);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGELFNKAFL_GET_COMPONENTTYPE_OFFSET))(this);
		}

	};
