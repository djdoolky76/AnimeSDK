#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIVariableValueSource; }
namespace RPG::GameCore { class LittleGameStateTreeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E6C30)
#define RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E6C40)
#define RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E6C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameStateTreeConfig_TypeDefinitionIndex = 18848;

	class LittleGameStateTreeConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean EnableStateTree; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* AIConfigPath; // 0x18
		::RPG::GameCore::AIVariableValueSource* OverrideVariables; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameStateTreeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameStateTreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameStateTreeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameStateTreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESTATETREECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
