#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define OOIJIDMLIAC_ILLEJLHKDPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5CD0)

inline static constexpr unsigned int OOIJIDMLIAC_ILLEJLHKDPI_TypeDefinitionIndex = 70894;

class OOIJIDMLIAC_ILLEJLHKDPI : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_ILLEJLHKDPI__CTOR_OFFSET))(this);
	}
};
