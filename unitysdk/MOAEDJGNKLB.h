#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOAEDJGNKLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1302CC70)

inline static constexpr unsigned int MOAEDJGNKLB_TypeDefinitionIndex = 61100;

class MOAEDJGNKLB : public ::System::Object
{
public:
	::System::Int32 CHKILKCALHB; // 0x10
	::System::Int32 KMNMKDJFAFK; // 0x14
	::System::Int32 PHIKBGHJCKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAEDJGNKLB__CTOR_OFFSET))(this);
	}
};
