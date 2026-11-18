#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"

namespace MoleMole::Battle { class Entity; }

#define CPHDHKKJOFE_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x13277EB0)
#define CPHDHKKJOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13277F40)

inline static constexpr unsigned int CPHDHKKJOFE_TypeDefinitionIndex = 89781;

class CPHDHKKJOFE : public ::ENHHCBBAADE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHDHKKJOFE__CTOR_OFFSET))(this);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CPHDHKKJOFE_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}
};
