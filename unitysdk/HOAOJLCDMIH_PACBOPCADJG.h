#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HOAOJLCDMIH;
namespace MoleMole::Battle { class Entity; }

#define HOAOJLCDMIH_PACBOPCADJG_DFFEGJKOPMI_OFFSET UNITYSDK_OFFSET(0x140C6BD0)
#define HOAOJLCDMIH_PACBOPCADJG__CTOR_OFFSET UNITYSDK_OFFSET(0x140C6BC0)

inline static constexpr unsigned int HOAOJLCDMIH_PACBOPCADJG_TypeDefinitionIndex = 62938;

class HOAOJLCDMIH_PACBOPCADJG : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* CGELPKBKHOJ; // 0x10
	::HOAOJLCDMIH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_PACBOPCADJG__CTOR_OFFSET))(this);
	}

	::System::Void DFFEGJKOPMI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_PACBOPCADJG_DFFEGJKOPMI_OFFSET))(this, KECKGDFIALJ);
	}
};
