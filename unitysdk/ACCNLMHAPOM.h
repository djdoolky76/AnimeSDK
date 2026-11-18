#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLHOHGOKNHK.h"
#include "unitysdk/System/Object.h"

class BGKBACMKBCL;

#define ACCNLMHAPOM_OPLAJHEFFPM_OFFSET UNITYSDK_OFFSET(0x17DC3360)
#define ACCNLMHAPOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC3350)

inline static constexpr unsigned int ACCNLMHAPOM_TypeDefinitionIndex = 57995;

class ACCNLMHAPOM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCNLMHAPOM__CTOR_OFFSET))(this);
	}

	static ::NLHOHGOKNHK OPLAJHEFFPM(::BGKBACMKBCL* KPNPOBAOPMD)
	{
		return ((::NLHOHGOKNHK(*)(::BGKBACMKBCL*))((::PBYTE)hIl2Cpp + ACCNLMHAPOM_OPLAJHEFFPM_OFFSET))(KPNPOBAOPMD);
	}
};
