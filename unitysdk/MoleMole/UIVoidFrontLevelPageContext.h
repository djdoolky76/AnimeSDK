#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BILCMCMBPFH.h"
#include "unitysdk/IJPHNBJEBLJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODEDETAILCONTEXT_OFFSET UNITYSDK_OFFSET(0x17199FD0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODELISTCONTEXT_OFFSET UNITYSDK_OFFSET(0x17199EA0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_RESETCONTEXT_OFFSET UNITYSDK_OFFSET(0x17199E50)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17199F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelPageContext_TypeDefinitionIndex = 77545;

	class UIVoidFrontLevelPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BILCMCMBPFH widgetType; // 0x28
		::IJPHNBJEBLJ difficulty; // 0x2C
		::System::Int32 nodeId; // 0x30
		::System::Int32 battleId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ResetContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_RESETCONTEXT_OFFSET))(this);
		}

		static ::MoleMole::UIVoidFrontLevelPageContext* GenToNodeListContext(::IJPHNBJEBLJ difficulty, ::System::Int32 focusNodeId)
		{
			return ((::MoleMole::UIVoidFrontLevelPageContext*(*)(::IJPHNBJEBLJ, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODELISTCONTEXT_OFFSET))(difficulty, focusNodeId);
		}

		static ::MoleMole::UIVoidFrontLevelPageContext* GenToNodeDetailContext(::System::Int32 openNodeId, ::System::Int32 openBattleId)
		{
			return ((::MoleMole::UIVoidFrontLevelPageContext*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODEDETAILCONTEXT_OFFSET))(openNodeId, openBattleId);
		}
	};
}
