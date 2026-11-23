#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F063D7EE61ED33FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F063D7EE61ED33FA_TypeDefinitionIndex = 7569;

class F063D7EE61ED33FA : public ::System::Object
{
public:
	::System::String* AAD46A807EC9A97C; // 0x10
	::System::Boolean E3D17824AB1D819C; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F063D7EE61ED33FA__CTOR_OFFSET))(this);
	}
};
