#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxExternalObjectConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXEXTERNALOBJECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F267170)
#define RPG_GAMECORE_LITTLEGAMESANDBOXEXTERNALOBJECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F267070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxExternalObjectConfig_TypeDefinitionIndex = 19105;

	class LittleGameSandboxExternalObjectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableItemOverride; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXEXTERNALOBJECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxExternalObjectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxExternalObjectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXEXTERNALOBJECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
