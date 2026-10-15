#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define ECJMLAGLLLH_CLEAR_OFFSET UNITYSDK_OFFSET(0x12D0BB70)
#define ECJMLAGLLLH_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0BC50)
#define ECJMLAGLLLH_GET_BAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x12D0BBF0)
#define ECJMLAGLLLH_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x12D0BC30)
#define ECJMLAGLLLH_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x12D0BC10)
#define ECJMLAGLLLH_SET_BAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x12D0BC00)
#define ECJMLAGLLLH_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x12D0BC40)
#define ECJMLAGLLLH_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x12D0BC20)

inline static constexpr unsigned int ECJMLAGLLLH_TypeDefinitionIndex = 60395;

	class ECJMLAGLLLH : public ::IAJLHKIHBFB
	{
	public:
		::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x28
		::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x30
		::RPG::GameCore::FiveDimBakedLevelConfig* _BakedLevelConfig_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimBakedLevelConfig* get_BakedLevelConfig()
		{
			return ((::RPG::GameCore::FiveDimBakedLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_GET_BAKEDLEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_BakedLevelConfig(::RPG::GameCore::FiveDimBakedLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBakedLevelConfig*))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_SET_BAKEDLEVELCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
		{
			return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_GET_LEVELVARBINDINGMAP_OFFSET))(this);
		}

		::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_SET_LEVELVARBINDINGMAP_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
		{
			return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_GET_CONTAINERINFO_OFFSET))(this);
		}

		::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + ECJMLAGLLLH_SET_CONTAINERINFO_OFFSET))(this, a1);
		}

	};
