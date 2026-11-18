#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define DFFAMLHHNAK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12409AD0)
#define DFFAMLHHNAK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12409A40)
#define DFFAMLHHNAK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12409CF0)
#define DFFAMLHHNAK__CTOR_OFFSET UNITYSDK_OFFSET(0x12409C50)

inline static constexpr unsigned int DFFAMLHHNAK_TypeDefinitionIndex = 38713;

class DFFAMLHHNAK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OPNFMCBPBLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFAMLHHNAK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFAMLHHNAK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DFFAMLHHNAK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFAMLHHNAK_GDEOPIBNOIN_OFFSET))(this);
	}
};
