#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFANBPAMBDJ;
class FBHPDPBIGPK;
class HJOHAIPEJDD;
class MBKEPKNGMNJ;
class PGCCNFPCKOH;

#define JGBMOOJHMBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35E640)

inline static constexpr unsigned int JGBMOOJHMBF_TypeDefinitionIndex = 88245;

class JGBMOOJHMBF : public ::System::Object
{
public:
	::PGCCNFPCKOH* AFMAKDJFOBO; // 0x10
	::FBHPDPBIGPK* GBJOIIAJFKL; // 0x18
	::MBKEPKNGMNJ* IOJLGBMDIOD; // 0x20
	::CFANBPAMBDJ* GALHKKCKLFJ; // 0x28
	::System::Int32 OJJCFCJBCPF; // 0x30
	::System::Boolean BAMAINDPBMI; // 0x34
	::System::Byte _padding0[0x3];
	::System::Int32 NPDKEGICFJL; // 0x38

	::System::Void _ctor(::HJOHAIPEJDD* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::HJOHAIPEJDD*))((::PBYTE)hIl2Cpp + JGBMOOJHMBF__CTOR_OFFSET))(this, LJBPECKCCEA);
	}
};
