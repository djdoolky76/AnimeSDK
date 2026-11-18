#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIJCHJAFBNO;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define EIJCHJAFBNO_DKAJHFOGKDH_BOONDLAKMFE_OFFSET UNITYSDK_OFFSET(0x16BEA7E0)
#define EIJCHJAFBNO_DKAJHFOGKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x16BEA7D0)

inline static constexpr unsigned int EIJCHJAFBNO_DKAJHFOGKDH_TypeDefinitionIndex = 62214;

class EIJCHJAFBNO_DKAJHFOGKDH : public ::System::Object
{
public:
	::EIJCHJAFBNO* KLHPEBKNIFB; // 0x10
	::System::Action_1<::MoleMole::Battle::Entity*>* AMHGBGMOMLL; // 0x18
	::System::Boolean JNJLOKNBFLP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_DKAJHFOGKDH__CTOR_OFFSET))(this);
	}

	::System::Void BOONDLAKMFE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_DKAJHFOGKDH_BOONDLAKMFE_OFFSET))(this, KECKGDFIALJ);
	}
};
