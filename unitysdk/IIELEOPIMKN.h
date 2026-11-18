#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
class PMNKLBCPENN;
template <typename T> class AAMKEDEDHPD_1;

#define IIELEOPIMKN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A239E0)
#define IIELEOPIMKN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A23890)
#define IIELEOPIMKN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A23CC0)
#define IIELEOPIMKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14A23C00)

inline static constexpr unsigned int IIELEOPIMKN_TypeDefinitionIndex = 85480;

class IIELEOPIMKN : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x28
	::EBNPOEHOAGD* ACDKKCINLON; // 0x30
	::PMNKLBCPENN* HHGILNNMNAK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIELEOPIMKN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIELEOPIMKN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IIELEOPIMKN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIELEOPIMKN_GDEOPIBNOIN_OFFSET))(this);
	}
};
