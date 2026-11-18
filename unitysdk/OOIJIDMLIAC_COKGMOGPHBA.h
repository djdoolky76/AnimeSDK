#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHEANJHPPCO;
namespace MoleMole::Battle { class Entity; }

#define OOIJIDMLIAC_COKGMOGPHBA__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0B40)

inline static constexpr unsigned int OOIJIDMLIAC_COKGMOGPHBA_TypeDefinitionIndex = 70890;

class OOIJIDMLIAC_COKGMOGPHBA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* IJKLFDOALJN; // 0x10
	::EHEANJHPPCO* BGGACCHFLJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_COKGMOGPHBA__CTOR_OFFSET))(this);
	}
};
