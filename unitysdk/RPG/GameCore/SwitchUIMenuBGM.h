#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchUIMenuBGM; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHUIMENUBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB196F0)
#define RPG_GAMECORE_SWITCHUIMENUBGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB19700)
#define RPG_GAMECORE_SWITCHUIMENUBGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB196C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchUIMenuBGM_TypeDefinitionIndex = 21899;

	class SwitchUIMenuBGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean ShouldStop; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHUIMENUBGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchUIMenuBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchUIMenuBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHUIMENUBGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchUIMenuBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchUIMenuBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHUIMENUBGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
