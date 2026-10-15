#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterShaderSpeedEnable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9B7F0)
#define RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9B800)
#define RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9B7B0)

namespace RPG::GameCore
{
	class SetCharacterShaderSpeedEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterShaderSpeedEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterShaderSpeedEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterShaderSpeedEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterShaderSpeedEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
