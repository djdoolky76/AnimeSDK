#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/CharacterAimAssistEscapeConfig.h"

class MCGABACEIFE;

#define OFJNCMHCPCO_DFIOLLHIJFP_OFFSET UNITYSDK_OFFSET(0xFB84CE0)
#define OFJNCMHCPCO_GGBEKOFOAJG_OFFSET UNITYSDK_OFFSET(0xFB84D70)
#define OFJNCMHCPCO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xFB84EB0)

inline static constexpr unsigned int OFJNCMHCPCO_TypeDefinitionIndex = 70140;

class OFJNCMHCPCO : public ::System::Object
{
public:
	static ::System::Void DFIOLLHIJFP(::MCGABACEIFE* BCCMJHOEMOH)
	{
		return ((::System::Void(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_DFIOLLHIJFP_OFFSET))(BCCMJHOEMOH);
	}

	static ::System::Boolean GGBEKOFOAJG(::MCGABACEIFE* BCCMJHOEMOH, ::MoleMole::Config::CharacterAimAssistEscapeConfig& DFMKILICPFB, ::System::Single KMHGDBGLDAO, ::System::Single ALLNOLHHJMD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::MCGABACEIFE*, ::MoleMole::Config::CharacterAimAssistEscapeConfig&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_GGBEKOFOAJG_OFFSET))(BCCMJHOEMOH, DFMKILICPFB, KMHGDBGLDAO, ALLNOLHHJMD, PMNLNNGEIFM);
	}

	static ::System::Void NPOLNFDBOOD(::MCGABACEIFE* BCCMJHOEMOH)
	{
		return ((::System::Void(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_NPOLNFDBOOD_OFFSET))(BCCMJHOEMOH);
	}
};
