#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/LGCNEDCMPKM.h"

class NJDHJGDFLDI;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define IOOBDCKOKEJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18716230)
#define IOOBDCKOKEJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18716080)
#define IOOBDCKOKEJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18716670)
#define IOOBDCKOKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18716530)

inline static constexpr unsigned int IOOBDCKOKEJ_TypeDefinitionIndex = 52510;

class IOOBDCKOKEJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x28
	::NJDHJGDFLDI* HHGILNNMNAK; // 0x30
	::KCMIFNGABDC_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* DCFFKAGGHBA; // 0x38
	::AAMKEDEDHPD_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* NHAHPPJDFAE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOBDCKOKEJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOBDCKOKEJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IOOBDCKOKEJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOBDCKOKEJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
