#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AF9E8C692C168D28_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x168A070)
#define AF9E8C692C168D28_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3F221B0)
#define AF9E8C692C168D28_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1678550)

inline static constexpr unsigned int AF9E8C692C168D28_TypeDefinitionIndex = 19946;

struct alignas(4) AF9E8C692C168D28
{
	static ::AF9E8C692C168D28* StaticGet_AE04A22CC80CDB9D()
	{
		return (::AF9E8C692C168D28*)Il2CppClass::FromTypeDefinitionIndex(AF9E8C692C168D28_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF9E8C692C168D28_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AF9E8C692C168D28_B996A70283B60FAC_OFFSET))(this);
	}

	/*
	::System::Boolean FC3208D7B8C7EE04(::AF9E8C692C168D28 BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AF9E8C692C168D28))((::PBYTE)hIl2Cpp + AF9E8C692C168D28_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
	*/
};
