#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKOBFKHJFLH;
class FOHNAAPLNHN;
class HCLPKMIIANI;
class NFJIADFIJKO;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET UNITYSDK_OFFSET(0x1CDDB5E0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDB760)
#define RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CDDB840)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDCBE20)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GETLEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x1CDDC1B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1CDDC340)
#define RPG_CLIENT_LITTLEGAMEMANAGER_GET_SANDBOXMANAGER_OFFSET UNITYSDK_OFFSET(0x1CDDC360)
#define RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x1CDDC0B0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET UNITYSDK_OFFSET(0x1CDDB560)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CDDBF30)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_1_OFFSET UNITYSDK_OFFSET(0x1CDDB450)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET UNITYSDK_OFFSET(0x1CDDB390)
#define RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET UNITYSDK_OFFSET(0x1CDDBBD0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1CDDC350)
#define RPG_CLIENT_LITTLEGAMEMANAGER_SET_SANDBOXMANAGER_OFFSET UNITYSDK_OFFSET(0x1CDDC370)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x1CDD3130)
#define RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET UNITYSDK_OFFSET(0x1CDDC030)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET UNITYSDK_OFFSET(0x1CDDB4E0)
#define RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CDDBC20)
#define RPG_CLIENT_LITTLEGAMEMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CDDBA40)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0x1CDDB700)
#define RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDDB9D0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0x1CDDB650)
#define RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDDBFC0)
#define RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDDC160)
#define RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDDC100)
#define RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDDBC80)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameManager_TypeDefinitionIndex = 61861;

	class LittleGameManager : public ::System::Object
	{
	public:
		::FOHNAAPLNHN* _LevelInstanceManager; // 0x10
		::HCLPKMIIANI* _PendingInstance; // 0x18
		::FKOBFKHJFLH* _SandboxManager_k__BackingField; // 0x20
		::NFJIADFIJKO* _AssetLoader_k__BackingField; // 0x28
		::RPG::PoolDictionary_2<::System::String*, ::RPG::GameCore::LevelGraphConfig*>* _LevelGraphConfigs; // 0x30
		::HCLPKMIIANI* _CurrentInstance; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_CTOR_OFFSET))(this);
		}

		::System::Boolean LoadContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Boolean LoadContainer_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADCONTAINER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UNLOADCONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsContainerLoaded(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_ISCONTAINERLOADED_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckIfContainerCanBeLoaded(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_CHECKIFCONTAINERCANBELOADED_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__INITLEVELINSTANCES_OFFSET))(this);
		}

		::System::Void _DisposeLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSELEVELINSTANCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void LoadOnStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LOADONSTEP2_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void StopGame(::HCLPKMIIANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPGAME_OFFSET))(this, a1);
		}

		::System::Void StopCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_STOPCURRENTGAME_OFFSET))(this);
		}

		::System::Boolean HasCurrentGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_HASCURRENTGAME_OFFSET))(this);
		}

		::HCLPKMIIANI* GetCurrentInstance()
		{
			return ((::HCLPKMIIANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GETCURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateSingleInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__UPDATESINGLEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _LateUpdateSingleInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__LATEUPDATESINGLEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _DisposeSingleInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__DISPOSESINGLEINSTANCE_OFFSET))(this);
		}

		::System::Void _PendGameInstance(::HCLPKMIIANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__PENDGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TryStartPendingInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__TRYSTARTPENDINGINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphConfig* GetLevelGraphConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GETLEVELGRAPHCONFIG_OFFSET))(this, a1);
		}

		::System::Void _ClearLevelGraphConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET))(this);
		}

		::NFJIADFIJKO* get_AssetLoader()
		{
			return ((::NFJIADFIJKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::Void set_AssetLoader(::NFJIADFIJKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFJIADFIJKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_SET_ASSETLOADER_OFFSET))(this, a1);
		}

		::FKOBFKHJFLH* get_SandboxManager()
		{
			return ((::FKOBFKHJFLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_GET_SANDBOXMANAGER_OFFSET))(this);
		}

		::System::Void set_SandboxManager(::FKOBFKHJFLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKOBFKHJFLH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEMANAGER_SET_SANDBOXMANAGER_OFFSET))(this, a1);
		}

	};
}
