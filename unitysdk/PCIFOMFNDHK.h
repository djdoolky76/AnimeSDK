#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define PCIFOMFNDHK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDA22C0)
#define PCIFOMFNDHK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDA21E0)
#define PCIFOMFNDHK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDA2710)
#define PCIFOMFNDHK__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA2600)

inline static constexpr unsigned int PCIFOMFNDHK_TypeDefinitionIndex = 59483;

class PCIFOMFNDHK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x28
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIFOMFNDHK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIFOMFNDHK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCIFOMFNDHK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIFOMFNDHK_GDEOPIBNOIN_OFFSET))(this);
	}
};
