#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole::Battle { class Entity; }

#define NHPPEKNNKPF_MIKMKCFIEFK_AHKALODFMOL_OFFSET UNITYSDK_OFFSET(0x10D797D0)
#define NHPPEKNNKPF_MIKMKCFIEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D797C0)

inline static constexpr unsigned int NHPPEKNNKPF_MIKMKCFIEFK_TypeDefinitionIndex = 74433;

class NHPPEKNNKPF_MIKMKCFIEFK : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* FKCCGOEODBN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_MIKMKCFIEFK__CTOR_OFFSET))(this);
	}

	::System::Boolean AHKALODFMOL(::MoleMole::TurnBattleEntityUnit* JCPNDFAEOLI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_MIKMKCFIEFK_AHKALODFMOL_OFFSET))(this, JCPNDFAEOLI);
	}
};
