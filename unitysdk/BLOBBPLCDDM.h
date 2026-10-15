#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HCLPKMIIANI;
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLOBBPLCDDM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7C7C0)
#define BLOBBPLCDDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA7C170)
#define BLOBBPLCDDM_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xBA7C740)
#define BLOBBPLCDDM_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBA7C720)
#define BLOBBPLCDDM_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xBA7C760)
#define BLOBBPLCDDM_GET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0xBA7C7A0)
#define BLOBBPLCDDM_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBA7C780)
#define BLOBBPLCDDM_GHLAJBDCPND_OFFSET UNITYSDK_OFFSET(0xBA7C0E0)
#define BLOBBPLCDDM_HBDEBENFMBE_OFFSET UNITYSDK_OFFSET(0xBA7C240)
#define BLOBBPLCDDM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBA7C5E0)
#define BLOBBPLCDDM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBA7BD00)
#define BLOBBPLCDDM_MGEPIEOAALK_OFFSET UNITYSDK_OFFSET(0xBA7BC70)
#define BLOBBPLCDDM_MHPAMDDICLP_OFFSET UNITYSDK_OFFSET(0xBA7C320)
#define BLOBBPLCDDM_ODBJNPAIAAE_OFFSET UNITYSDK_OFFSET(0xBA7BE80)
#define BLOBBPLCDDM_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xBA7C1C0)
#define BLOBBPLCDDM_PIAABKHIANJ_OFFSET UNITYSDK_OFFSET(0xBA7C650)
#define BLOBBPLCDDM_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xBA7C750)
#define BLOBBPLCDDM_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBA7C730)
#define BLOBBPLCDDM_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xBA7C770)
#define BLOBBPLCDDM_SET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0xBA7C7B0)
#define BLOBBPLCDDM_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBA7C790)
#define BLOBBPLCDDM_TICK_OFFSET UNITYSDK_OFFSET(0xBA7C380)

inline static constexpr unsigned int BLOBBPLCDDM_TypeDefinitionIndex = 57301;

	class BLOBBPLCDDM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* _LevelConfig_k__BackingField; // 0x18
		::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBinding_k__BackingField; // 0x20
		::System::String* _LevelConfigPath_k__BackingField; // 0x28
		::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x30
		::HCLPKMIIANI* _LittleGameInstance_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_CTOR_OFFSET))(this);
		}

		::System::Void MGEPIEOAALK(::RPG::GameCore::FiveDimLoadMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimLoadMode))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_MGEPIEOAALK_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::LevelLittleGameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_ONWILLBEDESTROY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void PIAABKHIANJ(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_PIAABKHIANJ_OFFSET))(this, a1);
		}

		::System::Void ODBJNPAIAAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_ODBJNPAIAAE_OFFSET))(this);
		}

		::System::Void MHPAMDDICLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_MHPAMDDICLP_OFFSET))(this);
		}

		::System::Void GHLAJBDCPND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_GHLAJBDCPND_OFFSET))(this);
		}

		::System::Void HBDEBENFMBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_HBDEBENFMBE_OFFSET))(this);
		}

		::System::String* get_LevelConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_GET_LEVELCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_LevelConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_SET_LEVELCONFIGPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
		{
			return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_GET_CONTAINERINFO_OFFSET))(this);
		}

		::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_SET_CONTAINERINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameLevelConfig* get_LevelConfig()
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_GET_LEVELCONFIG_OFFSET))(this);
		}

		::System::Void set_LevelConfig(::RPG::GameCore::LittleGameLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_SET_LEVELCONFIG_OFFSET))(this, a1);
		}

		::HCLPKMIIANI* get_LittleGameInstance()
		{
			return ((::HCLPKMIIANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_LittleGameInstance(::HCLPKMIIANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_SET_LITTLEGAMEINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBinding()
		{
			return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_GET_LEVELVARBINDING_OFFSET))(this);
		}

		::System::Void set_LevelVarBinding(::RPG::GameCore::LittleGameLevelVarBindingMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + BLOBBPLCDDM_SET_LEVELVARBINDING_OFFSET))(this, a1);
		}

	};
