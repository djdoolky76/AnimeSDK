#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDIGBIBAMIJ.h"
#include "unitysdk/HBAFIACIIHP_KIJBACLCHEI.h"
#include "unitysdk/NNEOINMGHPJ.h"
#include "unitysdk/System/ValueType.h"

#define HBAFIACIIHP_BLCJNKLJPKJ_OFFSET UNITYSDK_OFFSET(0x7B0E60)
#define HBAFIACIIHP_GDMGMMGOPCI_OFFSET UNITYSDK_OFFSET(0x7B0E70)
#define HBAFIACIIHP_NCNOMFOCLBH_OFFSET UNITYSDK_OFFSET(0x4139C0)
#define HBAFIACIIHP__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0E20)

inline static constexpr unsigned int HBAFIACIIHP_TypeDefinitionIndex = 57358;

struct alignas(4) HBAFIACIIHP
{
	::NNEOINMGHPJ PIBFDLJJAGA; // 0x10
	::HBAFIACIIHP_KIJBACLCHEI BOHBDHAPLDN; // 0x1C
	::FDIGBIBAMIJ _CLOAPKDOJAA_k__BackingField; // 0x20

	::System::Void _ctor(::NNEOINMGHPJ GOKKAFOMBFD)
	{
		return ((::System::Void(*)(::PVOID, ::NNEOINMGHPJ))((::PBYTE)hIl2Cpp + HBAFIACIIHP__CTOR_OFFSET))(this, GOKKAFOMBFD);
	}

	::FDIGBIBAMIJ NCNOMFOCLBH()
	{
		return ((::FDIGBIBAMIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAFIACIIHP_NCNOMFOCLBH_OFFSET))(this);
	}

	::System::Boolean BLCJNKLJPKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAFIACIIHP_BLCJNKLJPKJ_OFFSET))(this);
	}

	::System::Void GDMGMMGOPCI(::FDIGBIBAMIJ EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FDIGBIBAMIJ))((::PBYTE)hIl2Cpp + HBAFIACIIHP_GDMGMMGOPCI_OFFSET))(this, EGEGIMGMJHN);
	}
};
