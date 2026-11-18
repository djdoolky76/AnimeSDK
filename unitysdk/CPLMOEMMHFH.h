#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CPLMOEMMHFH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15A24840)
#define CPLMOEMMHFH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15A24570)
#define CPLMOEMMHFH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15A255E0)
#define CPLMOEMMHFH_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15A255F0)
#define CPLMOEMMHFH_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15A241C0)
#define CPLMOEMMHFH__CTOR_OFFSET UNITYSDK_OFFSET(0x15A253C0)

inline static constexpr unsigned int CPLMOEMMHFH_TypeDefinitionIndex = 91545;

class CPLMOEMMHFH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* MLOBKCNPBPC; // 0x28
	::KCMIFNGABDC_1<::System::Single>* EMFODOKGNNE; // 0x30
	::KCMIFNGABDC_1<::System::Single>* EPKJKHKFLGK; // 0x38
	::KCMIFNGABDC_1<::System::Single>* KEFOLFMLNHA; // 0x40
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x48
	::KCMIFNGABDC_1<::System::Single>* HCPAAPBPEEB; // 0x50
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMOEMMHFH__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CPLMOEMMHFH_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMOEMMHFH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPLMOEMMHFH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMOEMMHFH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CPLMOEMMHFH_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
