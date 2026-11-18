#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPDDICPCGME__CTOR_OFFSET UNITYSDK_OFFSET(0x1988DAB0)

inline static constexpr unsigned int IPDDICPCGME_TypeDefinitionIndex = 67983;

class IPDDICPCGME : public ::System::Object
{
public:
	::System::Single KJHHMLJPDJO; // 0x10
	::System::Boolean OKPIPLOABAG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDDICPCGME__CTOR_OFFSET))(this);
	}
};
