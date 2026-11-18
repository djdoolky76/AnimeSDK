#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IGFKHLHKOAP_MOICIAELIEG;
namespace System { class Action; }

#define IGFKHLHKOAP_MOICIAELIEG_KHHAKLECLJK_BONBIHPLKIC_OFFSET UNITYSDK_OFFSET(0x1A464250)
#define IGFKHLHKOAP_MOICIAELIEG_KHHAKLECLJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A464240)

inline static constexpr unsigned int IGFKHLHKOAP_MOICIAELIEG_KHHAKLECLJK_TypeDefinitionIndex = 64021;

class IGFKHLHKOAP_MOICIAELIEG_KHHAKLECLJK : public ::System::Object
{
public:
	::IGFKHLHKOAP_MOICIAELIEG* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_MOICIAELIEG_KHHAKLECLJK__CTOR_OFFSET))(this);
	}

	::System::Void BONBIHPLKIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_MOICIAELIEG_KHHAKLECLJK_BONBIHPLKIC_OFFSET))(this);
	}
};
