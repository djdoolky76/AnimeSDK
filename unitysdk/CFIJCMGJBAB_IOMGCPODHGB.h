#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CFIJCMGJBAB_IOMGCPODHGB__CTOR_OFFSET UNITYSDK_OFFSET(0x13258050)

inline static constexpr unsigned int CFIJCMGJBAB_IOMGCPODHGB_TypeDefinitionIndex = 61037;

class CFIJCMGJBAB_IOMGCPODHGB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IOMGCPODHGB__CTOR_OFFSET))(this);
	}
};
