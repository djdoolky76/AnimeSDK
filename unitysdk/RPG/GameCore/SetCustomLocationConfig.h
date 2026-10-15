#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class SetCustomLocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9DD00)
#define RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9DD10)
#define RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9DCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCustomLocationConfig_TypeDefinitionIndex = 22491;

	class SetCustomLocationConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x20
		::System::Boolean RefreshImmediately; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCustomLocationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCustomLocationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCustomLocationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCustomLocationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCUSTOMLOCATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
