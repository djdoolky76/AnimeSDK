#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPFBEABCPEO.h"
#include "unitysdk/LPDBAPHAKMH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185EC520)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageContext_TypeDefinitionIndex = 91467;

	class UIVRBossBattlePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LPDBAPHAKMH type; // 0x28
		::System::Int32 JumpQuestId; // 0x2C
		::System::Int32 FromQuestId; // 0x30
		::HPFBEABCPEO JumpData; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
