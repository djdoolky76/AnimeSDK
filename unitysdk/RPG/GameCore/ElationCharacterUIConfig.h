#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELATIONCHARACTERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6047D0)
#define RPG_GAMECORE_ELATIONCHARACTERUICONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D604650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationCharacterUIConfig_TypeDefinitionIndex = 16544;

	class ElationCharacterUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID EchoPointDesc; // 0x10
		::Il2CppArray<::System::String*>* PreviewElationSkillTriggerKeyList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCHARACTERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationCharacterUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONCHARACTERUICONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
