#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GDBADFKOFFG_KMHHNONEDOH__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2720)

inline static constexpr unsigned int GDBADFKOFFG_KMHHNONEDOH_TypeDefinitionIndex = 74123;

class GDBADFKOFFG_KMHHNONEDOH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_KMHHNONEDOH__CTOR_OFFSET))(this);
	}
};
