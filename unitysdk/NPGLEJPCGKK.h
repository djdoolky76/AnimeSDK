#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define NPGLEJPCGKK_FDGFOHHHNHL_OFFSET UNITYSDK_OFFSET(0x593210)
#define NPGLEJPCGKK__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int NPGLEJPCGKK_TypeDefinitionIndex = 65102;

struct alignas(8) NPGLEJPCGKK
{
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPGLEJPCGKK__CTOR_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FDGFOHHHNHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGLEJPCGKK_FDGFOHHHNHL_OFFSET))(this);
	}
};
