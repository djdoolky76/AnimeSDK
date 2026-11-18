#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NIILFPLEBHA_KLANHIDKNMC_DFLCPKNGHLN_OFFSET UNITYSDK_OFFSET(0x13153A90)
#define NIILFPLEBHA_KLANHIDKNMC__CTOR_OFFSET UNITYSDK_OFFSET(0x13153A80)

inline static constexpr unsigned int NIILFPLEBHA_KLANHIDKNMC_TypeDefinitionIndex = 79072;

class NIILFPLEBHA_KLANHIDKNMC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_KLANHIDKNMC__CTOR_OFFSET))(this);
	}

	::System::Void DFLCPKNGHLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_KLANHIDKNMC_DFLCPKNGHLN_OFFSET))(this);
	}
};
