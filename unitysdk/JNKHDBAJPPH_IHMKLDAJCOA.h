#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBOMIGCHIIK.h"
#include "unitysdk/System/Object.h"

class JNKHDBAJPPH;

#define JNKHDBAJPPH_IHMKLDAJCOA_FJOPHPAGFOE_OFFSET UNITYSDK_OFFSET(0x18752F90)
#define JNKHDBAJPPH_IHMKLDAJCOA__CTOR_OFFSET UNITYSDK_OFFSET(0x18750F70)

inline static constexpr unsigned int JNKHDBAJPPH_IHMKLDAJCOA_TypeDefinitionIndex = 45083;

class JNKHDBAJPPH_IHMKLDAJCOA : public ::System::Object
{
public:
	::JNKHDBAJPPH* KLHPEBKNIFB; // 0x10
	::DBOMIGCHIIK LNAMPFKDHII; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKHDBAJPPH_IHMKLDAJCOA__CTOR_OFFSET))(this);
	}

	::System::Void FJOPHPAGFOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKHDBAJPPH_IHMKLDAJCOA_FJOPHPAGFOE_OFFSET))(this);
	}
};
