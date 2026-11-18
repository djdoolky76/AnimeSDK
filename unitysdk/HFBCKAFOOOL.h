#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HFBCKAFOOOL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D8A510)
#define HFBCKAFOOOL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D8A480)
#define HFBCKAFOOOL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D8AAA0)
#define HFBCKAFOOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8AA00)

inline static constexpr unsigned int HFBCKAFOOOL_TypeDefinitionIndex = 88798;

class HFBCKAFOOOL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBCKAFOOOL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBCKAFOOOL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFBCKAFOOOL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBCKAFOOOL_GDEOPIBNOIN_OFFSET))(this);
	}
};
