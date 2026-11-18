#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IADDHANFKPG;
namespace MoleMole::Battle { class Entity; }

#define JKBFCKAFPIN_OCMJEDCNBIN_DPAMAIJCOAB_OFFSET UNITYSDK_OFFSET(0x13CC5AF0)
#define JKBFCKAFPIN_OCMJEDCNBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC5AE0)

inline static constexpr unsigned int JKBFCKAFPIN_OCMJEDCNBIN_TypeDefinitionIndex = 39756;

class JKBFCKAFPIN_OCMJEDCNBIN : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* FFHNMDNPGMC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBFCKAFPIN_OCMJEDCNBIN__CTOR_OFFSET))(this);
	}

	::System::Void DPAMAIJCOAB(::System::Boolean JBNBMFNNELP, ::IADDHANFKPG* LKEEOKHHGBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + JKBFCKAFPIN_OCMJEDCNBIN_DPAMAIJCOAB_OFFSET))(this, JBNBMFNNELP, LKEEOKHHGBN);
	}
};
