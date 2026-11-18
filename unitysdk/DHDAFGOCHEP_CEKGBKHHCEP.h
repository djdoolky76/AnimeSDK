#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define DHDAFGOCHEP_CEKGBKHHCEP_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x12080770)
#define DHDAFGOCHEP_CEKGBKHHCEP__CTOR_OFFSET UNITYSDK_OFFSET(0x12080760)

inline static constexpr unsigned int DHDAFGOCHEP_CEKGBKHHCEP_TypeDefinitionIndex = 85342;

class DHDAFGOCHEP_CEKGBKHHCEP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDAFGOCHEP_CEKGBKHHCEP__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDAFGOCHEP_CEKGBKHHCEP_FDLNIEGEOLI_OFFSET))(this);
	}
};
