#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BHLABGFPPLK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x113E8890)
#define BHLABGFPPLK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x113E87B0)
#define BHLABGFPPLK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x113E8A30)
#define BHLABGFPPLK__CTOR_OFFSET UNITYSDK_OFFSET(0x113E8940)

inline static constexpr unsigned int BHLABGFPPLK_TypeDefinitionIndex = 63124;

class BHLABGFPPLK : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FHMLNLCILAM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLABGFPPLK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLABGFPPLK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BHLABGFPPLK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLABGFPPLK_GDEOPIBNOIN_OFFSET))(this);
	}
};
