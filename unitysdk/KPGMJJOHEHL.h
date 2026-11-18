#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define KPGMJJOHEHL_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x13C8A420)
#define KPGMJJOHEHL__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8A470)

inline static constexpr unsigned int KPGMJJOHEHL_TypeDefinitionIndex = 57095;

class KPGMJJOHEHL : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::System::String* ABIEPJBODMH; // 0x18
	::System::Double BPEGDPLGFPO; // 0x20
	::System::Double KGGJCGPMAIH; // 0x28
	::MoleMole::Config::BaseProperty ECAJMFPANNE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGMJJOHEHL__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGMJJOHEHL_FCMNHLDLJCI_OFFSET))(this);
	}
};
