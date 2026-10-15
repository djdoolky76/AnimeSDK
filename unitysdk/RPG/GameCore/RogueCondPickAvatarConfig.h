#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondPickAvatarConfig; }

#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984CB0)
#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984CC0)
#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPickAvatarConfig_TypeDefinitionIndex = 19802;

	class RogueCondPickAvatarConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPickAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPickAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPickAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPickAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
