#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A982679F32E48938__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A982679F32E48938_TypeDefinitionIndex = 8999;

class A982679F32E48938 : public ::System::Object
{
public:
	::System::String* AAD46A807EC9A97C; // 0x10
	::System::Boolean E3D17824AB1D819C; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A982679F32E48938__CTOR_OFFSET))(this);
	}
};
