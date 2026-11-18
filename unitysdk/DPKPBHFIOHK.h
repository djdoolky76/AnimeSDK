#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DPKPBHFIOHK_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xF9A9340)
#define DPKPBHFIOHK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF9A92D0)
#define DPKPBHFIOHK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9A9120)
#define DPKPBHFIOHK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9A97C0)
#define DPKPBHFIOHK__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A9630)

inline static constexpr unsigned int DPKPBHFIOHK_TypeDefinitionIndex = 83992;

class DPKPBHFIOHK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28
	::KCMIFNGABDC_1<::System::Single>* NEEEIGBMAMF; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* NIAGGKBJPIH; // 0x38
	::MKBBPOFGLOF* HCECPNOEAHE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPBHFIOHK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_GDEOPIBNOIN_OFFSET))(this);
	}
};
