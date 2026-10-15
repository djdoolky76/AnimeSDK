#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshChangePhaseUI; }

#define RPG_GAMECORE_REFRESHCHANGEPHASEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D976140)
#define RPG_GAMECORE_REFRESHCHANGEPHASEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D976150)
#define RPG_GAMECORE_REFRESHCHANGEPHASEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D976080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshChangePhaseUI_TypeDefinitionIndex = 23208;

	class RefreshChangePhaseUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHCHANGEPHASEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshChangePhaseUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshChangePhaseUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHCHANGEPHASEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshChangePhaseUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshChangePhaseUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHCHANGEPHASEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
