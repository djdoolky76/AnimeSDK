#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define NHDODLEPOIA_LGIMMGBOMBA_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x6EF260)
#define NHDODLEPOIA_LGIMMGBOMBA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x6EF270)

inline static constexpr unsigned int NHDODLEPOIA_LGIMMGBOMBA_TypeDefinitionIndex = 45768;

struct alignas(4) NHDODLEPOIA_LGIMMGBOMBA
{
	::System::Boolean JIPJAGOKBLO; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single EALEMDIFGEG; // 0x14
	::System::Single BLAENNFALBG; // 0x18
	::System::UInt32 AOGNNJLKHGL; // 0x1C

	::MoleMole::Battle::Entity* IBNCFMCGHFC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDODLEPOIA_LGIMMGBOMBA_IBNCFMCGHFC_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDODLEPOIA_LGIMMGBOMBA_JDAPDDEOCEA_OFFSET))(this);
	}
};
