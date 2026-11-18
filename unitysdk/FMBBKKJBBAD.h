#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class NJDHJGDFLDI;

#define FMBBKKJBBAD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AE1EB0)
#define FMBBKKJBBAD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AE1E20)
#define FMBBKKJBBAD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AE20B0)
#define FMBBKKJBBAD__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE2060)

inline static constexpr unsigned int FMBBKKJBBAD_TypeDefinitionIndex = 45490;

class FMBBKKJBBAD : public ::MHMFINLCNFN
{
public:
	::NJDHJGDFLDI* KEKFDDAFLJC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBBKKJBBAD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBBKKJBBAD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FMBBKKJBBAD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBBKKJBBAD_GDEOPIBNOIN_OFFSET))(this);
	}
};
