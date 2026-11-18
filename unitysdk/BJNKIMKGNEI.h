#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IIBINLMOGLF;

#define BJNKIMKGNEI__CTOR_OFFSET UNITYSDK_OFFSET(0x18682810)

inline static constexpr unsigned int BJNKIMKGNEI_TypeDefinitionIndex = 45213;

class BJNKIMKGNEI : public ::System::Object
{
public:
	::IIBINLMOGLF* KPGDPJGHMCA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNKIMKGNEI__CTOR_OFFSET))(this);
	}
};
