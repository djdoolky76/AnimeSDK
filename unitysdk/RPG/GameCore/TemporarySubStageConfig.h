#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TemporarySubStageConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEMPORARYSUBSTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C7370)
#define RPG_GAMECORE_TEMPORARYSUBSTAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F5C7240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TemporarySubStageConfig_TypeDefinitionIndex = 19329;

	class TemporarySubStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StagePath; // 0x10
		::System::String* EnvironmentProfilePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPORARYSUBSTAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TemporarySubStageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TemporarySubStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPORARYSUBSTAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
