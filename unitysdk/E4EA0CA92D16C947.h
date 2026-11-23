#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B5A53485A0CB61F8;
namespace System { class String; }

#define E4EA0CA92D16C947_FCDA7F4AA6188CC0_OFFSET UNITYSDK_OFFSET(0x3CC5FB0)
#define E4EA0CA92D16C947__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4EA0CA92D16C947_TypeDefinitionIndex = 10562;

class E4EA0CA92D16C947 : public ::System::Object
{
public:
	static ::B5A53485A0CB61F8* FCDA7F4AA6188CC0(::System::String* BF35D9381545B37C)
	{
		return ((::B5A53485A0CB61F8*(*)(::System::String*))((::PBYTE)hIl2Cpp + E4EA0CA92D16C947_FCDA7F4AA6188CC0_OFFSET))(BF35D9381545B37C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4EA0CA92D16C947__CTOR_OFFSET))(this);
	}
};
