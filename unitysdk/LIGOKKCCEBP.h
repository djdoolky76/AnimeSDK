#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define LIGOKKCCEBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A313600)
#define LIGOKKCCEBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A313520)
#define LIGOKKCCEBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A313A40)
#define LIGOKKCCEBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A313930)

inline static constexpr unsigned int LIGOKKCCEBP_TypeDefinitionIndex = 52312;

class LIGOKKCCEBP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x28
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGOKKCCEBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGOKKCCEBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LIGOKKCCEBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGOKKCCEBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
