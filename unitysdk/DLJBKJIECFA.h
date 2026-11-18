#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOJELGMDBBA.h"
#include "unitysdk/System/Object.h"

#define DLJBKJIECFA_ANAMCOFEIDK_OFFSET UNITYSDK_OFFSET(0x1834CEE0)
#define DLJBKJIECFA_FAFIEHOHLCD_OFFSET UNITYSDK_OFFSET(0x1834CF40)
#define DLJBKJIECFA_GAKHNEJGHCG_OFFSET UNITYSDK_OFFSET(0x1834CA80)
#define DLJBKJIECFA_GEJMDLKMJFH_OFFSET UNITYSDK_OFFSET(0x1834C670)
#define DLJBKJIECFA_LLCPLICBCCF_OFFSET UNITYSDK_OFFSET(0x1834CE90)
#define DLJBKJIECFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1834C660)

inline static constexpr unsigned int DLJBKJIECFA_TypeDefinitionIndex = 65566;

class DLJBKJIECFA : public ::System::Object
{
public:
	::System::Int32 EOCHDHFMOBC; // 0x10
	::GOJELGMDBBA OBNIAHNMHPF; // 0x14
	::System::Int32 OIKFFGKDHME; // 0x18
	::System::Int32 HGHMIJHGGLD; // 0x1C

	::System::Void _ctor(::System::Int32 OIKFFGKDHME, ::GOJELGMDBBA OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GOJELGMDBBA))((::PBYTE)hIl2Cpp + DLJBKJIECFA__CTOR_OFFSET))(this, OIKFFGKDHME, OBNIAHNMHPF);
	}

	::System::Void GEJMDLKMJFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJBKJIECFA_GEJMDLKMJFH_OFFSET))(this);
	}

	::System::Void GAKHNEJGHCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJBKJIECFA_GAKHNEJGHCG_OFFSET))(this);
	}

	::System::Void LLCPLICBCCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJBKJIECFA_LLCPLICBCCF_OFFSET))(this);
	}

	::System::Int32 ANAMCOFEIDK(::System::Boolean FLAOIAEMEDP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLJBKJIECFA_ANAMCOFEIDK_OFFSET))(this, FLAOIAEMEDP);
	}

	::System::Int32 FAFIEHOHLCD(::System::Boolean FLAOIAEMEDP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLJBKJIECFA_FAFIEHOHLCD_OFFSET))(this, FLAOIAEMEDP);
	}
};
