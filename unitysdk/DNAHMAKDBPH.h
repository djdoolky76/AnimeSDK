#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DNAHMAKDBPH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDC7240)
#define DNAHMAKDBPH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDC7090)
#define DNAHMAKDBPH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDC76A0)
#define DNAHMAKDBPH_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0xFDC76B0)
#define DNAHMAKDBPH_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0xFDC6F40)
#define DNAHMAKDBPH__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC7510)

inline static constexpr unsigned int DNAHMAKDBPH_TypeDefinitionIndex = 68294;

class DNAHMAKDBPH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* IDMKDFMOKNC; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* BAAICNAPNLL; // 0x30
	::CPABOPKIGAL* EGCCIODCJIA; // 0x38
	::KCMIFNGABDC_1<::System::String*>* ENMEIJPEPDB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAHMAKDBPH__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
