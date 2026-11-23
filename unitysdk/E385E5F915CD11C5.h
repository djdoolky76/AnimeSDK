#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B6564CAC678AC465.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define E385E5F915CD11C5_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3C01970)
#define E385E5F915CD11C5_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3C018F0)
#define E385E5F915CD11C5__CTOR_OFFSET UNITYSDK_OFFSET(0x3C019A0)

inline static constexpr unsigned int E385E5F915CD11C5_TypeDefinitionIndex = 11377;

class E385E5F915CD11C5 : public ::System::Object
{
public:
	::Il2CppArray<::System::Reflection::MemberInfo*>* F9BBE3E2D8075A15; // 0x10
	::System::Type* FDDEE9ED768777A3; // 0x18
	::B6564CAC678AC465 B8FD3A78347874BC; // 0x20

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E385E5F915CD11C5_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + E385E5F915CD11C5_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor(::System::Type* A288CB28FC2A6DA3, ::B6564CAC678AC465 F99B0FE319DB74D1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + E385E5F915CD11C5__CTOR_OFFSET))(this, A288CB28FC2A6DA3, F99B0FE319DB74D1);
	}
};
