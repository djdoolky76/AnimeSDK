#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceCharacterConfig; }

#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA574C0)
#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA57540)
#define RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5AA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceCharacterConfig_TypeDefinitionIndex = 18057;

	class RtDefenceCharacterConfig : public ::RPG::GameCore::RtCharacterConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCECHARACTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
