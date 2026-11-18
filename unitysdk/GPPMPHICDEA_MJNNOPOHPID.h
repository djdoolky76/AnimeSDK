#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGLNBJNNLJG.h"
#include "unitysdk/System/Object.h"

#define GPPMPHICDEA_MJNNOPOHPID_CBKGLAGGFOL_OFFSET UNITYSDK_OFFSET(0x13D78770)
#define GPPMPHICDEA_MJNNOPOHPID__CTOR_OFFSET UNITYSDK_OFFSET(0x13D78760)

inline static constexpr unsigned int GPPMPHICDEA_MJNNOPOHPID_TypeDefinitionIndex = 42610;

class GPPMPHICDEA_MJNNOPOHPID : public ::System::Object
{
public:
	::AGLNBJNNLJG KBGEJBBONEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MJNNOPOHPID__CTOR_OFFSET))(this);
	}

	::System::Void CBKGLAGGFOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MJNNOPOHPID_CBKGLAGGFOL_OFFSET))(this);
	}
};
