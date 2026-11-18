#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"

class IIBHDMAHNMF;

#define JHCFIHLLOJA_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x13ACF9C0)
#define JHCFIHLLOJA_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x13ACF6B0)
#define JHCFIHLLOJA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13ACF930)
#define JHCFIHLLOJA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13ACF800)
#define JHCFIHLLOJA_LBCBMNCKDPG_OFFSET UNITYSDK_OFFSET(0x13ACF8A0)
#define JHCFIHLLOJA_MMGMBDMNCLF_OFFSET UNITYSDK_OFFSET(0x13ACF3F0)
#define JHCFIHLLOJA__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACF890)

inline static constexpr unsigned int JHCFIHLLOJA_TypeDefinitionIndex = 70351;

class JHCFIHLLOJA : public ::ABLPDAPPABA
{
public:
	::IIBHDMAHNMF* AHMFPFACACD; // 0x50
	::System::Int32 IAFHBCHLBME; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA__CTOR_OFFSET))(this);
	}

	::System::Void MMGMBDMNCLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA_MMGMBDMNCLF_OFFSET))(this);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void LBCBMNCKDPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA_LBCBMNCKDPG_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCFIHLLOJA_BBJHAJJPFKG_OFFSET))(this);
	}
};
