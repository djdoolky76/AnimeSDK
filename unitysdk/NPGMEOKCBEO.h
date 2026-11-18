#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPGMEOKCBEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBDB30)

inline static constexpr unsigned int NPGMEOKCBEO_TypeDefinitionIndex = 28238;

class NPGMEOKCBEO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGMEOKCBEO__CTOR_OFFSET))(this);
	}
};
