#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GIGJEAGHFHH_ICIGPNLOMIF__CTOR_OFFSET UNITYSDK_OFFSET(0x179F3060)

inline static constexpr unsigned int GIGJEAGHFHH_ICIGPNLOMIF_TypeDefinitionIndex = 57057;

class GIGJEAGHFHH_ICIGPNLOMIF : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJEAGHFHH_ICIGPNLOMIF__CTOR_OFFSET))(this);
	}
};
