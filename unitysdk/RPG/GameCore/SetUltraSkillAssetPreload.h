#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetUltraSkillAssetPreload; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8D90)
#define RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC8E20)
#define RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC8CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUltraSkillAssetPreload_TypeDefinitionIndex = 22805;

	class SetUltraSkillAssetPreload : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::RPG::GameCore::DynamicFloat* SkillTargetCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUltraSkillAssetPreload* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUltraSkillAssetPreload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUltraSkillAssetPreload* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUltraSkillAssetPreload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
