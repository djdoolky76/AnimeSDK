#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CFIJCMGJBAB_GJGGGEKFOPD_FAILFALGJCI_OFFSET UNITYSDK_OFFSET(0x18DCD9D0)
#define CFIJCMGJBAB_GJGGGEKFOPD_OCKFBEOIMOM_OFFSET UNITYSDK_OFFSET(0x18DCD950)
#define CFIJCMGJBAB_GJGGGEKFOPD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCD940)

inline static constexpr unsigned int CFIJCMGJBAB_GJGGGEKFOPD_TypeDefinitionIndex = 61038;

class CFIJCMGJBAB_GJGGGEKFOPD : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GJGGGEKFOPD__CTOR_OFFSET))(this);
	}

	::System::Void OCKFBEOIMOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GJGGGEKFOPD_OCKFBEOIMOM_OFFSET))(this);
	}

	::System::Void FAILFALGJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GJGGGEKFOPD_FAILFALGJCI_OFFSET))(this);
	}
};
