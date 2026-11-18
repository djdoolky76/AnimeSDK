#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define GLEEAOKBGHG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x722080)
#define GLEEAOKBGHG_OHEEKHADOCM_OFFSET UNITYSDK_OFFSET(0x722090)
#define GLEEAOKBGHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x7220E0)

inline static constexpr unsigned int GLEEAOKBGHG_TypeDefinitionIndex = 70814;

struct alignas(4) GLEEAOKBGHG
{
	::MoleMole::EntityHandle MJPPILKEMBG; // 0x10
	::System::Single JOFGIANGHMK; // 0x20
	::System::Single HACJFKBLODH; // 0x24

	::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* MMDKDGPNHCK, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + GLEEAOKBGHG_BBOMJDBNHIC_OFFSET))(this, MMDKDGPNHCK, FNIOPKPHDEH);
	}

	::System::Boolean OHEEKHADOCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLEEAOKBGHG_OHEEKHADOCM_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLEEAOKBGHG_PHOADBJGFBE_OFFSET))(this);
	}
};
