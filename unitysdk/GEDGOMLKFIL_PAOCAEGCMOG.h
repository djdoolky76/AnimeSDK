#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GEDGOMLKFIL_PAOCAEGCMOG_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x15F16270)
#define GEDGOMLKFIL_PAOCAEGCMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16260)

inline static constexpr unsigned int GEDGOMLKFIL_PAOCAEGCMOG_TypeDefinitionIndex = 50930;

class GEDGOMLKFIL_PAOCAEGCMOG : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDGOMLKFIL_PAOCAEGCMOG__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI(::System::Single KDEHMPGOCEP, ::System::Int32 OBAKMLJHABF, ::System::Single HOOCKGEIJCK, ::System::Int32 GFHJCGKLPNG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + GEDGOMLKFIL_PAOCAEGCMOG_FDLNIEGEOLI_OFFSET))(this, KDEHMPGOCEP, OBAKMLJHABF, HOOCKGEIJCK, GFHJCGKLPNG);
	}
};
