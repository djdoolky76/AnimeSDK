#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BF4C66B491CC04C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF4C66B491CC04C6_TypeDefinitionIndex = 8254;

class BF4C66B491CC04C6 : public ::System::Object
{
public:
	::System::String* AAD46A807EC9A97C; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF4C66B491CC04C6__CTOR_OFFSET))(this);
	}
};
