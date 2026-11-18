#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICMIAOGAIIG.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define FCFOAKMODLK__CTOR_OFFSET UNITYSDK_OFFSET(0x6CFF90)

inline static constexpr unsigned int FCFOAKMODLK_TypeDefinitionIndex = 86116;

struct alignas(8) FCFOAKMODLK
{
	::MoleMole::Battle::Entity* CPLFOFKKGGO; // 0x10
	::ICMIAOGAIIG LPKHABFHCLM; // 0x18
	::System::Byte _padding0[0x4];
	::MoleMole::Battle::Entity* NHBJELHFLCB; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::ICMIAOGAIIG FCPCLIJNDLA, ::MoleMole::Battle::Entity* AKGAAJGFCAK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::ICMIAOGAIIG, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCFOAKMODLK__CTOR_OFFSET))(this, KECKGDFIALJ, FCPCLIJNDLA, AKGAAJGFCAK);
	}
};
