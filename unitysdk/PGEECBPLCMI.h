#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PGEECBPLCMI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11B64270)
#define PGEECBPLCMI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11B64190)
#define PGEECBPLCMI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11B645C0)
#define PGEECBPLCMI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B644D0)

inline static constexpr unsigned int PGEECBPLCMI_TypeDefinitionIndex = 78188;

class PGEECBPLCMI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* PLKJBPPNLHI; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEECBPLCMI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEECBPLCMI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PGEECBPLCMI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEECBPLCMI_GDEOPIBNOIN_OFFSET))(this);
	}
};
