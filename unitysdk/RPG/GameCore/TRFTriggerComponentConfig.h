#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFTriggerComponentConfig; }

#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53F10)
#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB53F20)
#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB53EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFTriggerComponentConfig_TypeDefinitionIndex = 18910;

	class TRFTriggerComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* ActiveEntities; // 0x10
		::Il2CppArray<::System::UInt32>* DeactiveEntities; // 0x18
		::System::Boolean TriggerOnce; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFTriggerComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFTriggerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFTriggerComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFTriggerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
