#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IGFKHLHKOAP_MOICIAELIEG;
namespace System { class Action; }

#define IGFKHLHKOAP_MOICIAELIEG_NFLKDIOEPDK_MFCMIFCODHD_OFFSET UNITYSDK_OFFSET(0x12EB00D0)
#define IGFKHLHKOAP_MOICIAELIEG_NFLKDIOEPDK__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB00C0)

inline static constexpr unsigned int IGFKHLHKOAP_MOICIAELIEG_NFLKDIOEPDK_TypeDefinitionIndex = 64019;

class IGFKHLHKOAP_MOICIAELIEG_NFLKDIOEPDK : public ::System::Object
{
public:
	::IGFKHLHKOAP_MOICIAELIEG* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_MOICIAELIEG_NFLKDIOEPDK__CTOR_OFFSET))(this);
	}

	::System::Void MFCMIFCODHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_MOICIAELIEG_NFLKDIOEPDK_MFCMIFCODHD_OFFSET))(this);
	}
};
