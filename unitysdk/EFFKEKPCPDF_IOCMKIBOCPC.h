#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define EFFKEKPCPDF_IOCMKIBOCPC_FFJLIKEHGIC_OFFSET UNITYSDK_OFFSET(0x1613E0A0)
#define EFFKEKPCPDF_IOCMKIBOCPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1613E090)

inline static constexpr unsigned int EFFKEKPCPDF_IOCMKIBOCPC_TypeDefinitionIndex = 70751;

class EFFKEKPCPDF_IOCMKIBOCPC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFKEKPCPDF_IOCMKIBOCPC__CTOR_OFFSET))(this);
	}

	::System::Single FFJLIKEHGIC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFKEKPCPDF_IOCMKIBOCPC_FFJLIKEHGIC_OFFSET))(this);
	}
};
