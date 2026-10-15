#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuildRefFallbackLangConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA071B0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_GET_GAMELANGCODE2PLATFORM_OFFSET UNITYSDK_OFFSET(0x1DA071C0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_GPFFKKKJEGJ_OFFSET UNITYSDK_OFFSET(0x1DA071E0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA07040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefFallbackLangConfig_TypeDefinitionIndex = 17676;

	class RogueTournBuildRefFallbackLangConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CN; // 0x10
		::System::String* Oversea; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PlatformLangCodeMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _GameLangCode2Platform; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuildRefFallbackLangConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuildRefFallbackLangConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_GameLangCode2Platform()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_GET_GAMELANGCODE2PLATFORM_OFFSET))(this);
		}

		::System::Void GPFFKKKJEGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFFALLBACKLANGCONFIG_GPFFKKKJEGJ_OFFSET))(this);
		}

	};
}
