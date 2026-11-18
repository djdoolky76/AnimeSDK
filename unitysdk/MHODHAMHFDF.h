#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLFILIFJMEE.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/JFMGLDNHHDA.h"

class KGBFLHNJHHN;

#define MHODHAMHFDF_FHEJKDNIDIG_OFFSET UNITYSDK_OFFSET(0x1910B6D0)
#define MHODHAMHFDF_GBPALBGMKFL_OFFSET UNITYSDK_OFFSET(0x1910B6B0)
#define MHODHAMHFDF_GKMHJBLONJJ_OFFSET UNITYSDK_OFFSET(0x1910B790)
#define MHODHAMHFDF_HEMIPKJKMMB_OFFSET UNITYSDK_OFFSET(0x1910B6A0)
#define MHODHAMHFDF_NCJOAMCJKLD_OFFSET UNITYSDK_OFFSET(0x1910B6E0)
#define MHODHAMHFDF_NKLPDEBMBEG_OFFSET UNITYSDK_OFFSET(0x1910B6F0)
#define MHODHAMHFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B6C0)

inline static constexpr unsigned int MHODHAMHFDF_TypeDefinitionIndex = 14457;

class MHODHAMHFDF : public ::PLFILIFJMEE
{
public:
	::System::Int32 ABHBKFJKINO; // 0x88

	::System::Void _ctor(::JFMGLDNHHDA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JFMGLDNHHDA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHODHAMHFDF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean HEMIPKJKMMB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHODHAMHFDF_HEMIPKJKMMB_OFFSET))(this);
	}

	::System::Int32 GBPALBGMKFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHODHAMHFDF_GBPALBGMKFL_OFFSET))(this);
	}

	::System::Int32 FHEJKDNIDIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHODHAMHFDF_FHEJKDNIDIG_OFFSET))(this);
	}

	::System::Boolean NCJOAMCJKLD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHODHAMHFDF_NCJOAMCJKLD_OFFSET))(this);
	}

	::Foundation::AssetPath NKLPDEBMBEG(::System::Boolean ECEMKCOLBOE)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHODHAMHFDF_NKLPDEBMBEG_OFFSET))(this, ECEMKCOLBOE);
	}

	::System::Boolean GKMHJBLONJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHODHAMHFDF_GKMHJBLONJJ_OFFSET))(this);
	}
};
