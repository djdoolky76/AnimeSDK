#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PCEDNEEEFMA_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CC5E0)
#define PCEDNEEEFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC5B0)

inline static constexpr unsigned int PCEDNEEEFMA_TypeDefinitionIndex = 93594;

struct alignas(4) PCEDNEEEFMA
{
	::System::UInt32 DPGCKBEJLJD; // 0x10
	::System::UInt32 KPDPMNJIFHC; // 0x14
	::System::Single JMLCPADPPNM; // 0x18
	::System::Int32 GBANKBFFEOD; // 0x1C
	::System::Int32 KIFJPFIOEEC; // 0x20
	::System::Boolean JDHNGMEGLAC; // 0x24

	::System::Void _ctor(::System::UInt32 FLEDHKJGAEP, ::System::UInt32 NHAMIGLHPHK, ::System::Single BGDDNHMJALJ, ::System::Int32 NIDMJCBDEHA, ::System::Int32 JMECLHCHIGP, ::System::Boolean DKPHLFILKIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PCEDNEEEFMA__CTOR_OFFSET))(this, FLEDHKJGAEP, NHAMIGLHPHK, BGDDNHMJALJ, NIDMJCBDEHA, JMECLHCHIGP, DKPHLFILKIN);
	}

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEDNEEEFMA_JGGHNLBNKHA_OFFSET))(this);
	}
};
