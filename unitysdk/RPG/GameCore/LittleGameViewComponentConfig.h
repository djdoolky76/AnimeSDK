#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameViewComponentConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B9BD0)
#define RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B9BE0)
#define RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B9A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameViewComponentConfig_TypeDefinitionIndex = 18843;

	class LittleGameViewComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Boolean UseParentPanelUV; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameViewComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameViewComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameViewComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameViewComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
