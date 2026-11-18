#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define NFMHLLBJCBB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x105B6170)
#define NFMHLLBJCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x105B6660)

inline static constexpr unsigned int NFMHLLBJCBB_TypeDefinitionIndex = 69843;

class NFMHLLBJCBB : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHLLBJCBB__CTOR_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NFMHLLBJCBB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}
};
