#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define PKKCELEHDBA_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBEF290)
#define PKKCELEHDBA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBEF280)
#define PKKCELEHDBA_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xCBEF260)
#define PKKCELEHDBA_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xCBEF240)
#define PKKCELEHDBA_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xCBEF270)
#define PKKCELEHDBA_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xCBEF250)

inline static constexpr unsigned int PKKCELEHDBA_TypeDefinitionIndex = 61689;

	class PKKCELEHDBA : public ::IAJLHKIHBFB
	{
	public:
		::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x28
		::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x30
		static ::System::Int32* StaticGet_MKBNALHKDHF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PKKCELEHDBA")->GetStaticField(0xD790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKCELEHDBA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKKCELEHDBA_CCTOR_OFFSET))();
		}

		::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
		{
			return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKCELEHDBA_GET_LEVELVARBINDINGMAP_OFFSET))(this);
		}

		::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + PKKCELEHDBA_SET_LEVELVARBINDINGMAP_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
		{
			return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKCELEHDBA_GET_CONTAINERINFO_OFFSET))(this);
		}

		::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + PKKCELEHDBA_SET_CONTAINERINFO_OFFSET))(this, a1);
		}

	};
