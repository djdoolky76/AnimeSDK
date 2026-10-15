#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetupFreeStyleSupport; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETUPFREESTYLESUPPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACD370)
#define RPG_GAMECORE_SETUPFREESTYLESUPPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACD3B0)
#define RPG_GAMECORE_SETUPFREESTYLESUPPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACD310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupFreeStyleSupport_TypeDefinitionIndex = 21906;

	class SetupFreeStyleSupport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* FreeStyleCharacterID; // 0x28
		::System::String* FreeStyleCharacterConfigPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPFREESTYLESUPPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupFreeStyleSupport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupFreeStyleSupport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPFREESTYLESUPPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupFreeStyleSupport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupFreeStyleSupport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPFREESTYLESUPPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
