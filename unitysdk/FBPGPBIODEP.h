#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FBPGPBIODEP__CTOR_OFFSET UNITYSDK_OFFSET(0x131FCC50)

inline static constexpr unsigned int FBPGPBIODEP_TypeDefinitionIndex = 49403;

class FBPGPBIODEP : public ::System::Object
{
public:
	// static const ::System::Int16 EGACPEDAGML = 0x0; // 0x0
	// static const ::System::Int16 ECJPGICEPGF = 0x1; // 0x0
	// static const ::System::Int16 NIPLABFHBAO = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPGPBIODEP__CTOR_OFFSET))(this);
	}
};
