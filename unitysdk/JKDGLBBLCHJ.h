#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define JKDGLBBLCHJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14FC0360)
#define JKDGLBBLCHJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14FC0280)
#define JKDGLBBLCHJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14FC0590)
#define JKDGLBBLCHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC0480)

inline static constexpr unsigned int JKDGLBBLCHJ_TypeDefinitionIndex = 75627;

class JKDGLBBLCHJ : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* EGCCIODCJIA; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* ELBGKIJHCML; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDGLBBLCHJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDGLBBLCHJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JKDGLBBLCHJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDGLBBLCHJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
