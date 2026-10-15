#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerCustomString.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerCustomStringOnDialogEnd; }

#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC45A80)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC45A90)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC45DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomStringOnDialogEnd_TypeDefinitionIndex = 20750;

	class TriggerCustomStringOnDialogEnd : public ::RPG::GameCore::TriggerCustomString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomStringOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomStringOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
