#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define FBKLONNFKBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x140DE080)
#define FBKLONNFKBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x140DDFA0)
#define FBKLONNFKBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x140DE310)
#define FBKLONNFKBC__CTOR_OFFSET UNITYSDK_OFFSET(0x140DE220)

inline static constexpr unsigned int FBKLONNFKBC_TypeDefinitionIndex = 72017;

class FBKLONNFKBC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* PGHGMJNGDPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLONNFKBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLONNFKBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBKLONNFKBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLONNFKBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
