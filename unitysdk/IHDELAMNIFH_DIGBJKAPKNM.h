#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define IHDELAMNIFH_DIGBJKAPKNM_OAHHKGNMBIG_OFFSET UNITYSDK_OFFSET(0x153A98B0)
#define IHDELAMNIFH_DIGBJKAPKNM_OBABOEHKICH_OFFSET UNITYSDK_OFFSET(0x153A9860)
#define IHDELAMNIFH_DIGBJKAPKNM__CTOR_OFFSET UNITYSDK_OFFSET(0x153A9850)

inline static constexpr unsigned int IHDELAMNIFH_DIGBJKAPKNM_TypeDefinitionIndex = 91381;

class IHDELAMNIFH_DIGBJKAPKNM : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* IGJFIMNKLAH; // 0x10
	::System::Action_1<::System::Boolean>* ONAJICJAGOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDELAMNIFH_DIGBJKAPKNM__CTOR_OFFSET))(this);
	}

	::System::Void OBABOEHKICH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDELAMNIFH_DIGBJKAPKNM_OBABOEHKICH_OFFSET))(this);
	}

	::System::Void OAHHKGNMBIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDELAMNIFH_DIGBJKAPKNM_OAHHKGNMBIG_OFFSET))(this);
	}
};
