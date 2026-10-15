#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerGroupEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerGroupEventOnDialogEnd; }

#define RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC25EC0)
#define RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC25ED0)
#define RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC25FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerGroupEventOnDialogEnd_TypeDefinitionIndex = 21107;

	class TriggerGroupEventOnDialogEnd : public ::RPG::GameCore::TriggerGroupEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerGroupEventOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerGroupEventOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
