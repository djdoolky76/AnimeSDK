#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define GDOKLFPHOFJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10EE6630)
#define GDOKLFPHOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE6D50)

inline static constexpr unsigned int GDOKLFPHOFJ_TypeDefinitionIndex = 51699;

class GDOKLFPHOFJ : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOKLFPHOFJ__CTOR_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GDOKLFPHOFJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}
};
