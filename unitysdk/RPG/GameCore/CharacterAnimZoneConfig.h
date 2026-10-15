#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterAnimZoneConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERANIMZONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D568FD0)
#define RPG_GAMECORE_CHARACTERANIMZONECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D568FE0)
#define RPG_GAMECORE_CHARACTERANIMZONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D568F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAnimZoneConfig_TypeDefinitionIndex = 16563;

	class CharacterAnimZoneConfig : public ::RPG::GameCore::ComponentConfig
	{
	public:
		::System::String* AnimZoneConfigPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAnimZoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAnimZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAnimZoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAnimZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMZONECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
