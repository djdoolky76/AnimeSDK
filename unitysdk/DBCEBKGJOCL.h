#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }

#define DBCEBKGJOCL_IHDCJDOABMG_OFFSET UNITYSDK_OFFSET(0x1689ADD0)
#define DBCEBKGJOCL__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int DBCEBKGJOCL_TypeDefinitionIndex = 67386;

struct alignas(8) DBCEBKGJOCL
{
	::MoleMole::Battle::Entity* MPOJGGODONB; // 0x10
	::MoleMole::Battle::Entity* APMCPMGCEFP; // 0x18

	::System::Void _ctor(::MoleMole::Battle::Entity* BFDPPMDEOFF, ::MoleMole::Battle::Entity* OJOBAEMMGBE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBCEBKGJOCL__CTOR_OFFSET))(this, BFDPPMDEOFF, OJOBAEMMGBE);
	}

	/*
	static ::DBCEBKGJOCL IHDCJDOABMG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::DBCEBKGJOCL(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + DBCEBKGJOCL_IHDCJDOABMG_OFFSET))(KOIBHLHLMFC);
	}
	*/
};
