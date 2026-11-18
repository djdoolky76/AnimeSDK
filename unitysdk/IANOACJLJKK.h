#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJPDBOPHPAL.h"

class PNAONLKLHNB;

#define IANOACJLJKK_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x5ED1F0)
#define IANOACJLJKK__CTOR_OFFSET UNITYSDK_OFFSET(0x5ED1C0)

inline static constexpr unsigned int IANOACJLJKK_TypeDefinitionIndex = 77720;

struct alignas(8) IANOACJLJKK
{
	::System::Int32 OJOPNICAFIH; // 0x10
	::System::Byte _padding0[0x4];
	::PNAONLKLHNB* CEACGPMHMGH; // 0x18

	::System::Void _ctor(::PNAONLKLHNB* FKNFHGLBPHF)
	{
		return ((::System::Void(*)(::PVOID, ::PNAONLKLHNB*))((::PBYTE)hIl2Cpp + IANOACJLJKK__CTOR_OFFSET))(this, FKNFHGLBPHF);
	}

	::System::Void GBIMFDIADMD(::HJPDBOPHPAL& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::HJPDBOPHPAL&))((::PBYTE)hIl2Cpp + IANOACJLJKK_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}
};
