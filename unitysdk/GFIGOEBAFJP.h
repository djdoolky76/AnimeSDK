#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GFIGOEBAFJP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10EEC290)
#define GFIGOEBAFJP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10EEC200)
#define GFIGOEBAFJP_FIHOPECBDEC_OFFSET UNITYSDK_OFFSET(0x10EEC520)
#define GFIGOEBAFJP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10EEC870)
#define GFIGOEBAFJP__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEC7D0)

inline static constexpr unsigned int GFIGOEBAFJP_TypeDefinitionIndex = 47192;

class GFIGOEBAFJP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* BBDCELIJEDO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIGOEBAFJP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIGOEBAFJP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFIGOEBAFJP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void FIHOPECBDEC(::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GFIGOEBAFJP_FIHOPECBDEC_OFFSET))(this, CKPGOKHECCH);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIGOEBAFJP_GDEOPIBNOIN_OFFSET))(this);
	}
};
