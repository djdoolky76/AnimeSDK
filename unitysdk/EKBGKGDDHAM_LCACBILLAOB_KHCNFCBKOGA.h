#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKBGKGDDHAM_LCACBILLAOB;
namespace MoleMole::Battle { class Entity; }

#define EKBGKGDDHAM_LCACBILLAOB_KHCNFCBKOGA_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x1426BAF0)
#define EKBGKGDDHAM_LCACBILLAOB_KHCNFCBKOGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1426BAE0)

inline static constexpr unsigned int EKBGKGDDHAM_LCACBILLAOB_KHCNFCBKOGA_TypeDefinitionIndex = 88052;

class EKBGKGDDHAM_LCACBILLAOB_KHCNFCBKOGA : public ::System::Object
{
public:
	::EKBGKGDDHAM_LCACBILLAOB* KLHPEBKNIFB; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_KHCNFCBKOGA__CTOR_OFFSET))(this);
	}

	::System::Void LJHDGNAEDIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_KHCNFCBKOGA_LJHDGNAEDIC_OFFSET))(this);
	}
};
