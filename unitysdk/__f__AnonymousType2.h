#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define __F__ANONYMOUSTYPE2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9A61C0)
#define __F__ANONYMOUSTYPE2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9A6210)
#define __F__ANONYMOUSTYPE2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9A6220)
#define __F__ANONYMOUSTYPE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A61B0)
#define __F__ANONYMOUSTYPE2___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9A6260)
#define __F__ANONYMOUSTYPE2___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9A6270)
#define __F__ANONYMOUSTYPE2___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9A6280)

inline static constexpr unsigned int __f__AnonymousType2_TypeDefinitionIndex = 93569;

class __f__AnonymousType2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* value)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2_EQUALS_OFFSET))(this, value);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __base_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2___BASE_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __base_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2___BASE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + __F__ANONYMOUSTYPE2___BASE_TOSTRING_OFFSET))(this);
	}
};
