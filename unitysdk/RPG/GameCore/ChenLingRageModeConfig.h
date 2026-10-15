#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingRageModeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGRAGEMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D593C50)
#define RPG_GAMECORE_CHENLINGRAGEMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D585B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingRageModeConfig_TypeDefinitionIndex = 15688;

	class ChenLingRageModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint WaitEnterTime; // 0x10
		::System::String* EffectSkillConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGRAGEMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingRageModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingRageModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGRAGEMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
