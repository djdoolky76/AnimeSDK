#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define CAMDGBECBGP__CTOR_OFFSET UNITYSDK_OFFSET(0x124A93B0)

inline static constexpr unsigned int CAMDGBECBGP_TypeDefinitionIndex = 93540;

class CAMDGBECBGP : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 ODFOJEMAEMA; // 0x10
	::System::UInt32 FLEDHKJGAEP; // 0x14
	::System::UInt32 BKLGNCBNEGM; // 0x18
	::System::UInt32 PCLEPMLALHO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMDGBECBGP__CTOR_OFFSET))(this);
	}
};
