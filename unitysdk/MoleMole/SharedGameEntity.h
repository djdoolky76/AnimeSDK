#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_SHAREDGAMEENTITY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C0BEB20)
#define MOLEMOLE_SHAREDGAMEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BEBF0)

namespace MoleMole
{
	inline static constexpr unsigned int SharedGameEntity_TypeDefinitionIndex = 65114;

	class SharedGameEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREDGAMEENTITY__CTOR_OFFSET))(this);
		}

		static ::MoleMole::SharedGameEntity* op_Implicit(::MoleMole::Battle::Entity* value)
		{
			return ((::MoleMole::SharedGameEntity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREDGAMEENTITY_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
