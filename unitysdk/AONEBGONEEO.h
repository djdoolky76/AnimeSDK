#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AONEBGONEEO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1437B580)
#define AONEBGONEEO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1437B370)
#define AONEBGONEEO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1437BBB0)
#define AONEBGONEEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1437B9A0)

inline static constexpr unsigned int AONEBGONEEO_TypeDefinitionIndex = 90154;

class AONEBGONEEO : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* BFCCCDEBOJB; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JADBEIKLMLC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* MOLEPFCJKOE; // 0x38
	::KCMIFNGABDC_1<::System::String*>* HMGLNHIKKAN; // 0x40
	::CPABOPKIGAL* OJBMNLAJJLC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONEBGONEEO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONEBGONEEO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AONEBGONEEO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONEBGONEEO_GDEOPIBNOIN_OFFSET))(this);
	}
};
