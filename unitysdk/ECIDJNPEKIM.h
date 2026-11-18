#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECIDJNPEKIM__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCE990)

inline static constexpr unsigned int ECIDJNPEKIM_TypeDefinitionIndex = 84165;

class ECIDJNPEKIM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDJNPEKIM__CTOR_OFFSET))(this);
	}
};
