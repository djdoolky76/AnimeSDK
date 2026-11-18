#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NNOPCCGNJFE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE0ABAD0)
#define NNOPCCGNJFE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE0AB800)
#define NNOPCCGNJFE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE0AC650)
#define NNOPCCGNJFE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0xE0AC660)
#define NNOPCCGNJFE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0xE0AB6B0)
#define NNOPCCGNJFE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0AC430)

inline static constexpr unsigned int NNOPCCGNJFE_TypeDefinitionIndex = 60557;

class NNOPCCGNJFE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* JJJCIOJIKPF; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* GCGDDIAKJBL; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* KOGLPCOJEDF; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* AIHDMPINIMD; // 0x40
	::KCMIFNGABDC_1<::System::String*>* IHFDKIOOMAC; // 0x48
	::KCMIFNGABDC_1<::System::Single>* DCPACJKEPLG; // 0x50
	::KCMIFNGABDC_1<::System::Single>* DEGMIJJADNP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOPCCGNJFE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + NNOPCCGNJFE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOPCCGNJFE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NNOPCCGNJFE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOPCCGNJFE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + NNOPCCGNJFE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
