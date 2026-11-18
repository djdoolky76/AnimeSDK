#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBDDPHPODAN.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IAGNLPKPKLE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15397890)
#define IAGNLPKPKLE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153977B0)
#define IAGNLPKPKLE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15397E60)
#define IAGNLPKPKLE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15397DD0)
#define IAGNLPKPKLE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15397660)
#define IAGNLPKPKLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15397CE0)

inline static constexpr unsigned int IAGNLPKPKLE_TypeDefinitionIndex = 53030;

class IAGNLPKPKLE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MBDDPHPODAN>* ONKCBNCGAOF; // 0x28
	::KCMIFNGABDC_1<::System::String*>* IBNLAAIELGL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGNLPKPKLE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IAGNLPKPKLE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGNLPKPKLE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IAGNLPKPKLE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IAGNLPKPKLE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGNLPKPKLE_GDEOPIBNOIN_OFFSET))(this);
	}
};
