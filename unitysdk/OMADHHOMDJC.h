#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class LJNNNKPCNDL;
namespace MoleMole::Battle { class Entity; }

#define OMADHHOMDJC_LBFJELOHAAK_OFFSET UNITYSDK_OFFSET(0x6B8780)

inline static constexpr unsigned int OMADHHOMDJC_TypeDefinitionIndex = 63176;

struct alignas(8) OMADHHOMDJC
{
	::LJNNNKPCNDL* EPOOOJNFEPM; // 0x10

	::MoleMole::Battle::Entity* LBFJELOHAAK()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMADHHOMDJC_LBFJELOHAAK_OFFSET))(this);
	}
};
