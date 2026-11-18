#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"

namespace MoleMole::Battle { class Entity; }

#define JGKONHBOPNC_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x13077390)
#define JGKONHBOPNC__CTOR_OFFSET UNITYSDK_OFFSET(0x13077420)

inline static constexpr unsigned int JGKONHBOPNC_TypeDefinitionIndex = 60606;

class JGKONHBOPNC : public ::ENHHCBBAADE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKONHBOPNC__CTOR_OFFSET))(this);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + JGKONHBOPNC_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}
};
