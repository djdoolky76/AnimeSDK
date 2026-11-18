#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPPMPHICDEA_EALAAGENNHF_IHOBDDNNBBM_OFFSET UNITYSDK_OFFSET(0x15F42E90)
#define GPPMPHICDEA_EALAAGENNHF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F42E80)

inline static constexpr unsigned int GPPMPHICDEA_EALAAGENNHF_TypeDefinitionIndex = 42654;

class GPPMPHICDEA_EALAAGENNHF : public ::System::Object
{
public:
	::System::UInt32 IMLGBCLFFPL; // 0x10
	::System::Int32 BLJPLANGHJK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EALAAGENNHF__CTOR_OFFSET))(this);
	}

	::System::Void IHOBDDNNBBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EALAAGENNHF_IHOBDDNNBBM_OFFSET))(this);
	}
};
