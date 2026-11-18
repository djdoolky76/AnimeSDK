#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define IBKEFLEJHMH_GMNANFOKHMC_AMLNHIEDHEF_OFFSET UNITYSDK_OFFSET(0x160995F0)
#define IBKEFLEJHMH_GMNANFOKHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x160995E0)

inline static constexpr unsigned int IBKEFLEJHMH_GMNANFOKHMC_TypeDefinitionIndex = 85691;

class IBKEFLEJHMH_GMNANFOKHMC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* ABDGLFIOKFG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_GMNANFOKHMC__CTOR_OFFSET))(this);
	}

	::System::Boolean AMLNHIEDHEF(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IBKEFLEJHMH_GMNANFOKHMC_AMLNHIEDHEF_OFFSET))(this, NFFNEFLKPDG);
	}
};
