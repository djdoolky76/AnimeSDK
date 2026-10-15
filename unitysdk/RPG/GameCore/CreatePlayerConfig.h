#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreatePlayerConfig; }
namespace RPG::GameCore { class DOFConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEPLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E4B20)
#define RPG_GAMECORE_CREATEPLAYERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5E49E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePlayerConfig_TypeDefinitionIndex = 24406;

	class CreatePlayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnviroProfile; // 0x10
		::RPG::GameCore::DOFConfig* OverrallDOF; // 0x18
		::RPG::GameCore::DOFConfig* FeaturedDOF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePlayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePlayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
