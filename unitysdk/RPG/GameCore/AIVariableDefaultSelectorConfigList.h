#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDefaultSelectorConfig; }
namespace RPG::GameCore { class AIVariableDefaultSelectorConfigList; }

#define RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33BEF0)
#define RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33BF00)
#define RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33D150)

namespace RPG::GameCore
{
	class AIVariableDefaultSelectorConfigList : public ::RPG::GameCore::AIVariable
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIDefaultSelectorConfig*>* DefaultSelectorConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableDefaultSelectorConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableDefaultSelectorConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIVariableDefaultSelectorConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIVariableDefaultSelectorConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEDEFAULTSELECTORCONFIGLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
