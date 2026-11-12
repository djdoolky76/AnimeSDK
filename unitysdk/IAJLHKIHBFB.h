#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define IAJLHKIHBFB_CLEAR_OFFSET UNITYSDK_OFFSET(0x16DC0750)
#define IAJLHKIHBFB_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC0800)
#define IAJLHKIHBFB_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x16DC07A0)
#define IAJLHKIHBFB_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x16DC07C0)
#define IAJLHKIHBFB_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x16DC07E0)
#define IAJLHKIHBFB_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x16DC07B0)
#define IAJLHKIHBFB_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x16DC07D0)
#define IAJLHKIHBFB_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x16DC07F0)

inline static constexpr unsigned int IAJLHKIHBFB_TypeDefinitionIndex = 61855;

	class IAJLHKIHBFB : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* _LevelConfig_k__BackingField; // 0x10
		::System::String* _LevelConfigPath_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_CLEAR_OFFSET))(this);
		}

		::System::String* get_LevelConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_GET_LEVELCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_LevelConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_SET_LEVELCONFIGPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameLevelConfig* get_LevelConfig()
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_GET_LEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_LevelConfig(::RPG::GameCore::LittleGameLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_SET_LEVELCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAJLHKIHBFB_SET_OWNERENTITY_OFFSET))(this, a1);
		}

	};
