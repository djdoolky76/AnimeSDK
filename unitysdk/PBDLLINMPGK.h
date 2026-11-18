#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PBDLLINMPGK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12962530)
#define PBDLLINMPGK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12962320)
#define PBDLLINMPGK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12962F00)
#define PBDLLINMPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x12962CF0)

inline static constexpr unsigned int PBDLLINMPGK_TypeDefinitionIndex = 79125;

class PBDLLINMPGK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* MBMEIJHEOMJ; // 0x28
	::KCMIFNGABDC_1<::System::String*>* PEKFMFKECKD; // 0x30
	::MKBBPOFGLOF* PJLMMDPJABO; // 0x38
	::KCMIFNGABDC_1<::System::String*>* MOIMEHOPFID; // 0x40
	::MKBBPOFGLOF* HKAKOELNCHC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLLINMPGK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLLINMPGK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PBDLLINMPGK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLLINMPGK_GDEOPIBNOIN_OFFSET))(this);
	}
};
