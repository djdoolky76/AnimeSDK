#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPAGGILINE_1.h"
#include "unitysdk/System/ValueType.h"

#define INMGCFDLLBG_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x7CF180)
#define INMGCFDLLBG_IMEDIMLBPHF_OFFSET UNITYSDK_OFFSET(0x7CF190)
#define INMGCFDLLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x7CF170)

inline static constexpr unsigned int INMGCFDLLBG_TypeDefinitionIndex = 89494;

struct alignas(8) INMGCFDLLBG
{
	::System::Single OLBGMFEGMCG; // 0x10
	::System::Single KJOKHOAPMKP; // 0x14
	::System::Single LOOCPJIGOCI; // 0x18
	::System::Boolean MDNKBMGJMMP; // 0x1C
	::System::Byte _padding0[0x3];
	::KGPAGGILINE_1<::System::Single> DOLJODNMHDP; // 0x20
	::System::Single JAEGLCENMNI; // 0x28
	::System::Single HPICJDNBNME; // 0x2C

	::System::Void _ctor(::System::Single MGBCJOIJBHE, ::System::Single PEJOAEKACCP, ::System::Single BDDIGALJLJO, ::System::Boolean MJLPDHKCPIL, ::KGPAGGILINE_1<::System::Single> ANPEHAIDEJL, ::System::Single HIMDDLFPBDJ, ::System::Single DJNJCJLKDCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::KGPAGGILINE_1<::System::Single>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INMGCFDLLBG__CTOR_OFFSET))(this, MGBCJOIJBHE, PEJOAEKACCP, BDDIGALJLJO, MJLPDHKCPIL, ANPEHAIDEJL, HIMDDLFPBDJ, DJNJCJLKDCD);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMGCFDLLBG_GPKMPDHNCGL_OFFSET))(this);
	}

	::System::Single IMEDIMLBPHF(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INMGCFDLLBG_IMEDIMLBPHF_OFFSET))(this, EJAOAGGJHHA);
	}
};
