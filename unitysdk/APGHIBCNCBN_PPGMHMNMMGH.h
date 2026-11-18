#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define APGHIBCNCBN_PPGMHMNMMGH_CPEBMCMGLNP_OFFSET UNITYSDK_OFFSET(0x1437C690)
#define APGHIBCNCBN_PPGMHMNMMGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1437C680)

inline static constexpr unsigned int APGHIBCNCBN_PPGMHMNMMGH_TypeDefinitionIndex = 68125;

class APGHIBCNCBN_PPGMHMNMMGH : public ::System::Object
{
public:
	::System::Action* ACDMIDHJGLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGHIBCNCBN_PPGMHMNMMGH__CTOR_OFFSET))(this);
	}

	::System::Void CPEBMCMGLNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGHIBCNCBN_PPGMHMNMMGH_CPEBMCMGLNP_OFFSET))(this);
	}
};
