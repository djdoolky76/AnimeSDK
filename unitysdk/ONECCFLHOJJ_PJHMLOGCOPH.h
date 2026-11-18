#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ONECCFLHOJJ_BOLCFGPHANI;
namespace MoleMole::Battle { class Entity; }

#define ONECCFLHOJJ_PJHMLOGCOPH_HAIHDGMNJDP_OFFSET UNITYSDK_OFFSET(0x15FF18F0)
#define ONECCFLHOJJ_PJHMLOGCOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF18E0)

inline static constexpr unsigned int ONECCFLHOJJ_PJHMLOGCOPH_TypeDefinitionIndex = 84728;

class ONECCFLHOJJ_PJHMLOGCOPH : public ::System::Object
{
public:
	::ONECCFLHOJJ_BOLCFGPHANI* FGBNBFHOKAA; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::System::Int32 CLHLJKKAAPO; // 0x20
	::System::Boolean KKPOKLBPGDC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECCFLHOJJ_PJHMLOGCOPH__CTOR_OFFSET))(this);
	}

	::System::Void HAIHDGMNJDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECCFLHOJJ_PJHMLOGCOPH_HAIHDGMNJDP_OFFSET))(this);
	}
};
