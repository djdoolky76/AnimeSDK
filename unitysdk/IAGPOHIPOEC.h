#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMEDHELDEM.h"

#define IAGPOHIPOEC_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x141AD670)
#define IAGPOHIPOEC__CTOR_OFFSET UNITYSDK_OFFSET(0x141AD940)

inline static constexpr unsigned int IAGPOHIPOEC_TypeDefinitionIndex = 80683;

class IAGPOHIPOEC : public ::IFMEDHELDEM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGPOHIPOEC__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGPOHIPOEC_GPKMPDHNCGL_OFFSET))(this);
	}
};
