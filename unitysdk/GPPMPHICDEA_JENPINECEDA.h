#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGKLEOOEBCA.h"
#include "unitysdk/System/Object.h"

#define GPPMPHICDEA_JENPINECEDA_JJEOCJLBOKE_OFFSET UNITYSDK_OFFSET(0x16CDD180)
#define GPPMPHICDEA_JENPINECEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDD170)

inline static constexpr unsigned int GPPMPHICDEA_JENPINECEDA_TypeDefinitionIndex = 42655;

class GPPMPHICDEA_JENPINECEDA : public ::System::Object
{
public:
	::CGKLEOOEBCA LMBFOHJOHLC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JENPINECEDA__CTOR_OFFSET))(this);
	}

	::System::Void JJEOCJLBOKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JENPINECEDA_JJEOCJLBOKE_OFFSET))(this);
	}
};
