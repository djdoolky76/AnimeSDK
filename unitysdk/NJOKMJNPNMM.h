#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NJOKMJNPNMM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16B82E60)
#define NJOKMJNPNMM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16B82B40)
#define NJOKMJNPNMM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16B83670)
#define NJOKMJNPNMM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B83420)

inline static constexpr unsigned int NJOKMJNPNMM_TypeDefinitionIndex = 43441;

class NJOKMJNPNMM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* HPPOKOLGBJG; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* PLNLDPNBMFP; // 0x38
	::KCMIFNGABDC_1<::System::String*>* MBDHHLFFEKG; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* HBKOBMMPGPO; // 0x48
	::KCMIFNGABDC_1<::System::String*>* CHFJGKMBBHJ; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* JDGEPPMLIHD; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* OHPADKIJIJK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOKMJNPNMM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOKMJNPNMM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NJOKMJNPNMM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOKMJNPNMM_GDEOPIBNOIN_OFFSET))(this);
	}
};
