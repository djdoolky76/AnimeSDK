#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHJIOKAAJPK;
class IKPPBOMIPKO;

#define GHJIOKAAJPK_PODCGJDAAJB_ADNDLGINDON_OFFSET UNITYSDK_OFFSET(0x189FF6E0)
#define GHJIOKAAJPK_PODCGJDAAJB_JFFLNDFKIDC_OFFSET UNITYSDK_OFFSET(0x189FF780)
#define GHJIOKAAJPK_PODCGJDAAJB__CTOR_OFFSET UNITYSDK_OFFSET(0x189FF6D0)

inline static constexpr unsigned int GHJIOKAAJPK_PODCGJDAAJB_TypeDefinitionIndex = 55162;

class GHJIOKAAJPK_PODCGJDAAJB : public ::System::Object
{
public:
	::IKPPBOMIPKO* IPMMCGDMODG; // 0x10
	::GHJIOKAAJPK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PODCGJDAAJB__CTOR_OFFSET))(this);
	}

	::System::Void ADNDLGINDON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PODCGJDAAJB_ADNDLGINDON_OFFSET))(this);
	}

	::System::Void JFFLNDFKIDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK_PODCGJDAAJB_JFFLNDFKIDC_OFFSET))(this);
	}
};
