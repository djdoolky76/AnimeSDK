#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define CANIKIFMDGI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1477CA00)
#define CANIKIFMDGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1477D060)

inline static constexpr unsigned int CANIKIFMDGI_TypeDefinitionIndex = 87644;

class CANIKIFMDGI : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANIKIFMDGI__CTOR_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CANIKIFMDGI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}
};
