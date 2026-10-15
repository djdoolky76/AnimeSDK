#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetIronTombInfinityHPUI; }

#define RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6D20)
#define RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6D30)
#define RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIronTombInfinityHPUI_TypeDefinitionIndex = 23648;

	class SetIronTombInfinityHPUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShowInfinityHP; // 0x18
		::System::Boolean PlayInfinityHPFadeIn; // 0x19
		::System::Boolean IsShowPluralityHP; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIronTombInfinityHPUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIronTombInfinityHPUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIronTombInfinityHPUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIronTombInfinityHPUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBINFINITYHPUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
