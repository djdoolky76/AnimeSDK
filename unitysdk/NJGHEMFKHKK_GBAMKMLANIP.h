#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJGHEMFKHKK;
namespace System { class Action; }

#define NJGHEMFKHKK_GBAMKMLANIP_FBMHBGIOPHA_OFFSET UNITYSDK_OFFSET(0x11F836C0)
#define NJGHEMFKHKK_GBAMKMLANIP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F836B0)

inline static constexpr unsigned int NJGHEMFKHKK_GBAMKMLANIP_TypeDefinitionIndex = 71654;

class NJGHEMFKHKK_GBAMKMLANIP : public ::System::Object
{
public:
	::System::Action* JLMLJIMBKKP; // 0x10
	::NJGHEMFKHKK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_GBAMKMLANIP__CTOR_OFFSET))(this);
	}

	::System::Void FBMHBGIOPHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_GBAMKMLANIP_FBMHBGIOPHA_OFFSET))(this);
	}
};
