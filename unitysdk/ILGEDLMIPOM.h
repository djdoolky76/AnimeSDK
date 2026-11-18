#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueType.h"

#define ILGEDLMIPOM__CTOR_OFFSET UNITYSDK_OFFSET(0x7CED40)

inline static constexpr unsigned int ILGEDLMIPOM_TypeDefinitionIndex = 52176;

struct alignas(4) ILGEDLMIPOM
{
	::System::UInt64 HANIMNANBHH; // 0x10
	::System::Single LLBEKEFONPC; // 0x18
	::System::Byte _padding0[0x4];
	::MGHNAPKHBOG ENPFFAHEHCF; // 0x20
	::System::Boolean EHIEDIIMCBM; // 0x38
	::System::Boolean FHDHHENCECK; // 0x39
	::System::Boolean FGFMDINNFGE; // 0x3A
	::System::Byte _padding1[0x1];
	::System::Int32 MGKDGNDPJJL; // 0x3C
	::System::Boolean LHLPAONEAOO; // 0x40

	::System::Void _ctor(::System::UInt64 CJGFBDDCELO, ::System::Single PMNLNNGEIFM, ::MGHNAPKHBOG IHNGBLNIEIH, ::System::Boolean DBPEHBMHOIA, ::System::Boolean BLCFNNKPNMC, ::System::Boolean DIMMCKMODJF, ::System::Int32 NOCNNEGNDMP, ::System::Boolean GEDBGHKDNJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single, ::MGHNAPKHBOG, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGEDLMIPOM__CTOR_OFFSET))(this, CJGFBDDCELO, PMNLNNGEIFM, IHNGBLNIEIH, DBPEHBMHOIA, BLCFNNKPNMC, DIMMCKMODJF, NOCNNEGNDMP, GEDBGHKDNJC);
	}
};
