#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterMaterialEffectEnable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6D630)
#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6D640)
#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6D5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterMaterialEffectEnable_TypeDefinitionIndex = 22953;

	class SetCharacterMaterialEffectEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
