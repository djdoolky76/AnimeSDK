#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define MKGLKJKKOJI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12FF94C0)
#define MKGLKJKKOJI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12FF93E0)
#define MKGLKJKKOJI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12FF9850)
#define MKGLKJKKOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF9740)

inline static constexpr unsigned int MKGLKJKKOJI_TypeDefinitionIndex = 56800;

class MKGLKJKKOJI : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* HJBOJGMKDPC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* AEGCJGDAEPL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGLKJKKOJI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGLKJKKOJI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MKGLKJKKOJI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGLKJKKOJI_GDEOPIBNOIN_OFFSET))(this);
	}
};
