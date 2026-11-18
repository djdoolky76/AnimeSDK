#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

#define LOKMCMCCIIH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13D0B4C0)
#define LOKMCMCCIIH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0B4B0)

inline static constexpr unsigned int LOKMCMCCIIH_TypeDefinitionIndex = 52872;

class LOKMCMCCIIH : public ::System::Object
{
public:
	::System::UInt32 NFACFCMFNEC; // 0x10
	::Share::EItemType CEEINFPJBJO; // 0x14
	::System::Int64 JPCMFEMBJJH; // 0x18

	::System::Void _ctor(::Share::EItemType JCHOHDBNCKJ, ::System::UInt32 KCNOHOOPNAH, ::System::Int64 OJIEBBCKHGN)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EItemType, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + LOKMCMCCIIH__CTOR_OFFSET))(this, JCHOHDBNCKJ, KCNOHOOPNAH, OJIEBBCKHGN);
	}

	::System::Void _ctor_1(::LOKMCMCCIIH* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::LOKMCMCCIIH*))((::PBYTE)hIl2Cpp + LOKMCMCCIIH__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}
};
