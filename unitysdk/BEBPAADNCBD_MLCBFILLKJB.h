#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace MoleMole::Battle { class Entity; }

#define BEBPAADNCBD_MLCBFILLKJB_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0xFF68C60)
#define BEBPAADNCBD_MLCBFILLKJB__CTOR_OFFSET UNITYSDK_OFFSET(0xFF68C50)

inline static constexpr unsigned int BEBPAADNCBD_MLCBFILLKJB_TypeDefinitionIndex = 92136;

class BEBPAADNCBD_MLCBFILLKJB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBPAADNCBD_MLCBFILLKJB__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + BEBPAADNCBD_MLCBFILLKJB_FDLNIEGEOLI_OFFSET))(this, KOIBHLHLMFC);
	}
};
