#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCIMEEHJOKJ;

#define HCIMEEHJOKJ_IMPEEAKKFBF_HDDFIHACGNO_OFFSET UNITYSDK_OFFSET(0x149FD450)
#define HCIMEEHJOKJ_IMPEEAKKFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD440)

inline static constexpr unsigned int HCIMEEHJOKJ_IMPEEAKKFBF_TypeDefinitionIndex = 80984;

class HCIMEEHJOKJ_IMPEEAKKFBF : public ::System::Object
{
public:
	::HCIMEEHJOKJ* KLHPEBKNIFB; // 0x10
	::System::Int32 ELGOIMGMGNB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIMEEHJOKJ_IMPEEAKKFBF__CTOR_OFFSET))(this);
	}

	::System::Void HDDFIHACGNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIMEEHJOKJ_IMPEEAKKFBF_HDDFIHACGNO_OFFSET))(this);
	}
};
