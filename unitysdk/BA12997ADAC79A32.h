#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define BA12997ADAC79A32_ADFF57C8D93B0001_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BA12997ADAC79A32_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x2D5F5D0)
#define BA12997ADAC79A32_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3ED4040)
#define BA12997ADAC79A32__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ED40F0)
#define BA12997ADAC79A32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2759260)
#define BA12997ADAC79A32__CTOR_OFFSET UNITYSDK_OFFSET(0x3ED41A0)

inline static constexpr unsigned int BA12997ADAC79A32_TypeDefinitionIndex = 15182;

class BA12997ADAC79A32 : public ::System::Attribute
{
public:
	static ::BA12997ADAC79A32** StaticGet_AE04A22CC80CDB9D()
	{
		return (::BA12997ADAC79A32**)Il2CppClass::FromTypeDefinitionIndex(BA12997ADAC79A32_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* B9EB5C5C0457EF8C; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BA12997ADAC79A32__CCTOR_OFFSET))();
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BA12997ADAC79A32_B996A70283B60FAC_OFFSET))(this);
	}

	::System::String* ADFF57C8D93B0001()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BA12997ADAC79A32_ADFF57C8D93B0001_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA12997ADAC79A32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* BF35D9381545B37C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BA12997ADAC79A32__CTOR_1_OFFSET))(this, BF35D9381545B37C);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BA12997ADAC79A32_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}
};
