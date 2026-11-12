#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxConfig; }
namespace RPG::GameCore { class LittleGameSandboxNamedProfile; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA26F80)
#define RPG_GAMECORE_LITTLEGAMESANDBOXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA26D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxConfig_TypeDefinitionIndex = 19095;

	class LittleGameSandboxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 Version; // 0x14
		::System::String* DefaultProfileName; // 0x18
		::Il2CppArray<::RPG::GameCore::LittleGameSandboxNamedProfile*>* Profiles; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
