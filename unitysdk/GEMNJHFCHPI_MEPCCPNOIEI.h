#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEMNJHFCHPI_MEPCCPNOIEI_BOCDPNAOKOH_OFFSET UNITYSDK_OFFSET(0x10EE8970)
#define GEMNJHFCHPI_MEPCCPNOIEI_OAKMHICLPKI_OFFSET UNITYSDK_OFFSET(0x10EE8980)
#define GEMNJHFCHPI_MEPCCPNOIEI_PPLIIOIKJPA_OFFSET UNITYSDK_OFFSET(0x10EE8960)
#define GEMNJHFCHPI_MEPCCPNOIEI__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE8950)

inline static constexpr unsigned int GEMNJHFCHPI_MEPCCPNOIEI_TypeDefinitionIndex = 65026;

class GEMNJHFCHPI_MEPCCPNOIEI : public ::System::Object
{
public:
	::System::Boolean JMDILJBFPFH; // 0x10
	::System::Boolean CAAFEGLOALC; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_MEPCCPNOIEI__CTOR_OFFSET))(this);
	}

	::System::Void PPLIIOIKJPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_MEPCCPNOIEI_PPLIIOIKJPA_OFFSET))(this);
	}

	::System::Boolean BOCDPNAOKOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_MEPCCPNOIEI_BOCDPNAOKOH_OFFSET))(this);
	}

	::System::Void OAKMHICLPKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_MEPCCPNOIEI_OAKMHICLPKI_OFFSET))(this);
	}
};
