#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NKIAEJLNDCJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE1A8160)
#define NKIAEJLNDCJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE1A7E90)
#define NKIAEJLNDCJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE1A89A0)
#define NKIAEJLNDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A8750)

inline static constexpr unsigned int NKIAEJLNDCJ_TypeDefinitionIndex = 53947;

class NKIAEJLNDCJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BJGKEGPLHLH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* MHADPPEMGDG; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* NKDAJLPHGAP; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* FKOBBOMILJP; // 0x40
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x48
	::KCMIFNGABDC_1<::System::Int32>* AANOFOIMEDG; // 0x50
	::KCMIFNGABDC_1<::System::String*>* JOAEFLHJNNG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIAEJLNDCJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIAEJLNDCJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NKIAEJLNDCJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIAEJLNDCJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
