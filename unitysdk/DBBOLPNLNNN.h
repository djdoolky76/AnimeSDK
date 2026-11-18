#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DBBOLPNLNNN_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1A1CE1E0)
#define DBBOLPNLNNN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A1CE170)
#define DBBOLPNLNNN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A1CE0E0)
#define DBBOLPNLNNN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A1CE3D0)
#define DBBOLPNLNNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE330)

inline static constexpr unsigned int DBBOLPNLNNN_TypeDefinitionIndex = 63916;

class DBBOLPNLNNN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* JENCMJFOBFJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBOLPNLNNN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBOLPNLNNN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DBBOLPNLNNN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DBBOLPNLNNN_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBOLPNLNNN_GDEOPIBNOIN_OFFSET))(this);
	}
};
