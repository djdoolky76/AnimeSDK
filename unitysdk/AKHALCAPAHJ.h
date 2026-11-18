#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGEHFACPLJJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AKHALCAPAHJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x75B320)
#define AKHALCAPAHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x75B310)
#define AKHALCAPAHJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x52DB30)
#define AKHALCAPAHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x75B2F0)

inline static constexpr unsigned int AKHALCAPAHJ_TypeDefinitionIndex = 48046;

struct alignas(8) AKHALCAPAHJ
{
	::FGEHFACPLJJ CFMBGCMCNMM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* IMILJHBDOGJ; // 0x18
	::System::String* FHHHEPBCBCJ; // 0x20
	::System::String* OHHBKLCKMEO; // 0x28

	::System::Void _ctor(::FGEHFACPLJJ CFMBGCMCNMM)
	{
		return ((::System::Void(*)(::PVOID, ::FGEHFACPLJJ))((::PBYTE)hIl2Cpp + AKHALCAPAHJ__CTOR_OFFSET))(this, CFMBGCMCNMM);
	}

	::System::Void _ctor_1(::FGEHFACPLJJ CFMBGCMCNMM, ::System::String* FGLJLEADGEF, ::System::String* FHHHEPBCBCJ, ::System::String* OHHBKLCKMEO)
	{
		return ((::System::Void(*)(::PVOID, ::FGEHFACPLJJ, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AKHALCAPAHJ__CTOR_1_OFFSET))(this, CFMBGCMCNMM, FGLJLEADGEF, FHHHEPBCBCJ, OHHBKLCKMEO);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHALCAPAHJ_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHALCAPAHJ_DPIHOJBBGLA_OFFSET))(this);
	}
};
