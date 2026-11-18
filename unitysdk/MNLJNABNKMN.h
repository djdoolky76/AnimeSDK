#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define MNLJNABNKMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x177D2650)
#define MNLJNABNKMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x177D25C0)
#define MNLJNABNKMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x177D29E0)
#define MNLJNABNKMN__CTOR_OFFSET UNITYSDK_OFFSET(0x177D2940)

inline static constexpr unsigned int MNLJNABNKMN_TypeDefinitionIndex = 42071;

class MNLJNABNKMN : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* MMOJPJDIGLC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLJNABNKMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLJNABNKMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MNLJNABNKMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLJNABNKMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
