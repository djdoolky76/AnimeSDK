#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimZoneFootConfig; }

#define RPG_GAMECORE_ANIMZONEFOOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E613920)
#define RPG_GAMECORE_ANIMZONEFOOTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E613930)
#define RPG_GAMECORE_ANIMZONEFOOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E613C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneFootConfig_TypeDefinitionIndex = 16485;

	class AnimZoneFootConfig : public ::RPG::GameCore::AnimZoneBaseConfig
	{
	public:
		::System::Boolean IsStepL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEFOOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimZoneFootConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimZoneFootConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEFOOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimZoneFootConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimZoneFootConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEFOOTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
