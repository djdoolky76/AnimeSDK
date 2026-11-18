#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KFMMEBPBDGB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5D40)

inline static constexpr unsigned int KFMMEBPBDGB_TypeDefinitionIndex = 57533;

class KFMMEBPBDGB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMMEBPBDGB__CTOR_OFFSET))(this);
	}
};
