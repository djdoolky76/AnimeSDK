#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIOGGGIHCAE;
class PECIOCLHHOL;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }

#define PECIOCLHHOL_GAFNKAKKJNO_AINOCACAEPL_OFFSET UNITYSDK_OFFSET(0x13A8D7D0)
#define PECIOCLHHOL_GAFNKAKKJNO_NBKBGKKKPLB_OFFSET UNITYSDK_OFFSET(0x13A8D820)
#define PECIOCLHHOL_GAFNKAKKJNO__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8D7C0)

inline static constexpr unsigned int PECIOCLHHOL_GAFNKAKKJNO_TypeDefinitionIndex = 91719;

class PECIOCLHHOL_GAFNKAKKJNO : public ::System::Object
{
public:
	::MoleMole::Config::StageEntry* AAIJGGIEOGK; // 0x10
	::MoleMole::Battle::Entity* FBLGKEBILPF; // 0x18
	::AIOGGGIHCAE* BMDHAMNECNI; // 0x20
	::PECIOCLHHOL* KLHPEBKNIFB; // 0x28
	::System::Boolean PJPDLAMDJGF; // 0x30
	::System::Boolean GJIDLBNPCIO; // 0x31
	::System::Boolean CHMIIEFCCMF; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GAFNKAKKJNO__CTOR_OFFSET))(this);
	}

	::System::Void AINOCACAEPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GAFNKAKKJNO_AINOCACAEPL_OFFSET))(this);
	}

	::System::Void NBKBGKKKPLB(::System::Boolean FHEIMDLHKAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PECIOCLHHOL_GAFNKAKKJNO_NBKBGKKKPLB_OFFSET))(this, FHEIMDLHKAD);
	}
};
