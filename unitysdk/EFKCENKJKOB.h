#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFKCENKJKOB_GNEJLIKHHHA.h"
#include "unitysdk/EFKCENKJKOB_PMFGHMOFNOK.h"
#include "unitysdk/System/EventArgs.h"

class OKHOJCKHDAJ;

#define EFKCENKJKOB_BDNBNJHBONA_OFFSET UNITYSDK_OFFSET(0x20050920)
#define EFKCENKJKOB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x200507A0)
#define EFKCENKJKOB_GFGALLLMGLK_OFFSET UNITYSDK_OFFSET(0x200508A0)
#define EFKCENKJKOB_JIPHBPJFGMI_OFFSET UNITYSDK_OFFSET(0x200508B0)
#define EFKCENKJKOB_LBHMJPMPPPI_OFFSET UNITYSDK_OFFSET(0x20050890)
#define EFKCENKJKOB__CTOR_OFFSET UNITYSDK_OFFSET(0x20050840)

inline static constexpr unsigned int EFKCENKJKOB_TypeDefinitionIndex = 17999;

class EFKCENKJKOB : public ::System::EventArgs
{
public:
	::EFKCENKJKOB_PMFGHMOFNOK EGEGIMGMJHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKCENKJKOB__CTOR_OFFSET))(this);
	}

	::OKHOJCKHDAJ* DGNAAPGKIPL()
	{
		return ((::OKHOJCKHDAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKCENKJKOB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Void LBHMJPMPPPI(::System::Boolean GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFKCENKJKOB_LBHMJPMPPPI_OFFSET))(this, GEGOALONGBI);
	}

	::System::Void GFGALLLMGLK(::System::Single GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFKCENKJKOB_GFGALLLMGLK_OFFSET))(this, GEGOALONGBI);
	}

	::System::Void JIPHBPJFGMI(::EFKCENKJKOB_GNEJLIKHHHA OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::EFKCENKJKOB_GNEJLIKHHHA))((::PBYTE)hIl2Cpp + EFKCENKJKOB_JIPHBPJFGMI_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void BDNBNJHBONA(::System::UInt64 GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EFKCENKJKOB_BDNBNJHBONA_OFFSET))(this, GEGOALONGBI);
	}
};
