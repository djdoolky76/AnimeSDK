#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPHFADIIBM.h"

#define DMHJDLPACBJ_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x16977E00)
#define DMHJDLPACBJ_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x16977E80)
#define DMHJDLPACBJ_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x16977E10)
#define DMHJDLPACBJ_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x16977EC0)
#define DMHJDLPACBJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16977D70)
#define DMHJDLPACBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16977C90)

inline static constexpr unsigned int DMHJDLPACBJ_TypeDefinitionIndex = 57341;

class DMHJDLPACBJ : public ::KGPHFADIIBM
{
public:
	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHJDLPACBJ__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHJDLPACBJ__CTOR_1_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHJDLPACBJ_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHJDLPACBJ_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHJDLPACBJ_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHJDLPACBJ_OENOEFBECOA_OFFSET))(this);
	}
};
