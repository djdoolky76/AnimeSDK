#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

class PAFFKGCGNBD;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x1A03F780)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x1A03F9E0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CREATEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1A03F4E0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A03F010)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_UPDATEPARENTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A03F180)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03FBD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_TypeDefinitionIndex = 64080;

	class ConfigUISimpleParkourGame : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GlobalConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* LevelConfigs; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DifficultyToTutorialGroup; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateParentReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_UPDATEPARENTREFERENCES_OFFSET))(this);
		}

		::PAFFKGCGNBD* CreateGameData(::System::Int32 levelId)
		{
			return ((::PAFFKGCGNBD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CREATEGAMEDATA_OFFSET))(this, levelId);
		}

		::System::Void ApplyGlobalConfig(::PAFFKGCGNBD* gameData, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::PAFFKGCGNBD*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYGLOBALCONFIG_OFFSET))(this, gameData, config);
		}

		::System::Void ApplyLevelConfig(::PAFFKGCGNBD* gameData, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::PAFFKGCGNBD*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYLEVELCONFIG_OFFSET))(this, gameData, config);
		}
	};
}
