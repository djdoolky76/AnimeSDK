#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BOGHOFMJIJI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14F00830)
#define BOGHOFMJIJI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14F007A0)
#define BOGHOFMJIJI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14F00A20)
#define BOGHOFMJIJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F00980)

inline static constexpr unsigned int BOGHOFMJIJI_TypeDefinitionIndex = 44535;

class BOGHOFMJIJI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HMDCKLJFAED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGHOFMJIJI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGHOFMJIJI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BOGHOFMJIJI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGHOFMJIJI_GDEOPIBNOIN_OFFSET))(this);
	}
};
