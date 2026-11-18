#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPKHEMNFNLK;
namespace MoleMole::Battle { class Entity; }

#define GLPBCHDKIAD_BNPMACGBLGK_JBIMBMGHKHC_OFFSET UNITYSDK_OFFSET(0x13D69FB0)
#define GLPBCHDKIAD_BNPMACGBLGK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D69FA0)

inline static constexpr unsigned int GLPBCHDKIAD_BNPMACGBLGK_TypeDefinitionIndex = 91793;

class GLPBCHDKIAD_BNPMACGBLGK : public ::System::Object
{
public:
	::JPKHEMNFNLK* NNIHJPFJHDL; // 0x10
	::MoleMole::Battle::Entity* BDHOILPIGKB; // 0x18
	::MoleMole::Battle::Entity* LDIFCJFFHJC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BNPMACGBLGK__CTOR_OFFSET))(this);
	}

	::System::Void JBIMBMGHKHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BNPMACGBLGK_JBIMBMGHKHC_OFFSET))(this);
	}
};
