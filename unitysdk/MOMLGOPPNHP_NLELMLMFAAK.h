#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }

#define MOMLGOPPNHP_NLELMLMFAAK_CBLOOIDBDPA_OFFSET UNITYSDK_OFFSET(0xFA7F9F0)
#define MOMLGOPPNHP_NLELMLMFAAK_PLNLHEKGBCF_OFFSET UNITYSDK_OFFSET(0xFA7F920)
#define MOMLGOPPNHP_NLELMLMFAAK__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7F910)

inline static constexpr unsigned int MOMLGOPPNHP_NLELMLMFAAK_TypeDefinitionIndex = 50861;

class MOMLGOPPNHP_NLELMLMFAAK : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NLELMLMFAAK__CTOR_OFFSET))(this);
	}

	::System::Void PLNLHEKGBCF(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* GBCCMECIHGM)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NLELMLMFAAK_PLNLHEKGBCF_OFFSET))(this, GBCCMECIHGM);
	}

	::System::Void CBLOOIDBDPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_NLELMLMFAAK_CBLOOIDBDPA_OFFSET))(this);
	}
};
