#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCPLJJIAKMO;
namespace MoleMole::Battle { class Entity; }

#define DPCEONDGPMB_IJHDIJCOGBK_KIPAKDMFKOD_OFFSET UNITYSDK_OFFSET(0x16985E50)
#define DPCEONDGPMB_IJHDIJCOGBK__CTOR_OFFSET UNITYSDK_OFFSET(0x16985E40)

inline static constexpr unsigned int DPCEONDGPMB_IJHDIJCOGBK_TypeDefinitionIndex = 91691;

class DPCEONDGPMB_IJHDIJCOGBK : public ::System::Object
{
public:
	::BCPLJJIAKMO* EMAJNLIFHJB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_IJHDIJCOGBK__CTOR_OFFSET))(this);
	}

	::System::Void KIPAKDMFKOD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DPCEONDGPMB_IJHDIJCOGBK_KIPAKDMFKOD_OFFSET))(this, KECKGDFIALJ);
	}
};
