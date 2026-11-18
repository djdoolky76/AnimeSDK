#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCHJCFCBIEA.h"
#include "unitysdk/System/Attribute.h"

#define GFKAEHODNKO_BBCALLAOBNF_OFFSET UNITYSDK_OFFSET(0x189FD110)
#define GFKAEHODNKO_MCINFHGLBKC_OFFSET UNITYSDK_OFFSET(0x189FD120)
#define GFKAEHODNKO__CTOR_OFFSET UNITYSDK_OFFSET(0x189FD100)

inline static constexpr unsigned int GFKAEHODNKO_TypeDefinitionIndex = 75850;

class GFKAEHODNKO : public ::System::Attribute
{
public:
	::BCHJCFCBIEA _JJLIAIFGEHA_k__BackingField; // 0x10

	::System::Void _ctor(::BCHJCFCBIEA CMCKCGGOMFN)
	{
		return ((::System::Void(*)(::PVOID, ::BCHJCFCBIEA))((::PBYTE)hIl2Cpp + GFKAEHODNKO__CTOR_OFFSET))(this, CMCKCGGOMFN);
	}

	::BCHJCFCBIEA BBCALLAOBNF()
	{
		return ((::BCHJCFCBIEA(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKAEHODNKO_BBCALLAOBNF_OFFSET))(this);
	}

	::System::Void MCINFHGLBKC(::BCHJCFCBIEA EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BCHJCFCBIEA))((::PBYTE)hIl2Cpp + GFKAEHODNKO_MCINFHGLBKC_OFFSET))(this, EGEGIMGMJHN);
	}
};
