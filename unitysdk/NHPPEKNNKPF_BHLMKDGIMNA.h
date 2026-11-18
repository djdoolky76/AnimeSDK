#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define NHPPEKNNKPF_BHLMKDGIMNA_AADEOEEEGJN_OFFSET UNITYSDK_OFFSET(0x105BAF30)
#define NHPPEKNNKPF_BHLMKDGIMNA__CTOR_OFFSET UNITYSDK_OFFSET(0x105BAF20)

inline static constexpr unsigned int NHPPEKNNKPF_BHLMKDGIMNA_TypeDefinitionIndex = 74435;

class NHPPEKNNKPF_BHLMKDGIMNA : public ::System::Object
{
public:
	::System::Single GDLINBFOGFN; // 0x10
	::UnityEngine::Vector3 GKOEEJHILPG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_BHLMKDGIMNA__CTOR_OFFSET))(this);
	}

	::System::Boolean AADEOEEEGJN(::MoleMole::TurnBattleEntityUnit* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + NHPPEKNNKPF_BHLMKDGIMNA_AADEOEEEGJN_OFFSET))(this, HODAIDNDKHD);
	}
};
