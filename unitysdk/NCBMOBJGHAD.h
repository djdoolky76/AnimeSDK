#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NCBMOBJGHAD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16B5FEF0)
#define NCBMOBJGHAD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16B5FE60)
#define NCBMOBJGHAD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16B60090)
#define NCBMOBJGHAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B5FFF0)

inline static constexpr unsigned int NCBMOBJGHAD_TypeDefinitionIndex = 41971;

class NCBMOBJGHAD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* PGHGMJNGDPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBMOBJGHAD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBMOBJGHAD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NCBMOBJGHAD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBMOBJGHAD_GDEOPIBNOIN_OFFSET))(this);
	}
};
