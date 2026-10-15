#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/System/Object.h"
class FENBIHEDDPB;
class HCLPKMIIANI;
namespace RPG::Client { class LittleGameManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameConstConfig; }
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGamePresetConfigs; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xD483880)
#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET UNITYSDK_OFFSET(0xD483960)
#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET UNITYSDK_OFFSET(0xD483A40)
#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xD4837B0)
#define RPG_CLIENT_LITTLEGAMEUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xD484380)
#define RPG_CLIENT_LITTLEGAMEUTILS_CLEARCACHEDCONFIGS_OFFSET UNITYSDK_OFFSET(0xD4813E0)
#define RPG_CLIENT_LITTLEGAMEUTILS_DESTROYGAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0xD482DF0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_1_OFFSET UNITYSDK_OFFSET(0xD483410)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xD483190)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0xD482FA0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESET_OFFSET UNITYSDK_OFFSET(0xD4832E0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xD4822D0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD482260)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMELEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xD482410)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEMANAGER_OFFSET UNITYSDK_OFFSET(0xD471700)
#define RPG_CLIENT_LITTLEGAMEUTILS_HASCURRENTGAME_OFFSET UNITYSDK_OFFSET(0xD482D50)
#define RPG_CLIENT_LITTLEGAMEUTILS_INITDICECOMBATGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD482BF0)
#define RPG_CLIENT_LITTLEGAMEUTILS_INITGAMEWITHLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xD4825F0)
#define RPG_CLIENT_LITTLEGAMEUTILS_ISLITTLEGAMEPREFER4X3VCAMERA_OFFSET UNITYSDK_OFFSET(0xD4842E0)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xD483BF0)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET UNITYSDK_OFFSET(0xD483CD0)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET UNITYSDK_OFFSET(0xD483DB0)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xD483B20)
#define RPG_CLIENT_LITTLEGAMEUTILS_SETLITTLEGAMECAMERAMODE_OFFSET UNITYSDK_OFFSET(0xD483E90)
#define RPG_CLIENT_LITTLEGAMEUTILS_STOPCURRENTGAME_OFFSET UNITYSDK_OFFSET(0xD482CA0)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0xD483530)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_2_OFFSET UNITYSDK_OFFSET(0xD483600)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_3_OFFSET UNITYSDK_OFFSET(0xD4836D0)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xD483470)
#define RPG_CLIENT_LITTLEGAMEUTILS_UNLOADGAMECONFIG_OFFSET UNITYSDK_OFFSET(0xD482F60)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameUtils_TypeDefinitionIndex = 60406;

	class LittleGameUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGameConstConfig*>** StaticGet__GameConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGameConstConfig*>**)UnitySDK::FromName("RPG.Client", "LittleGameUtils")->GetStaticField(0x2DA90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGamePresetConfigs*>** StaticGet__PresetConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGamePresetConfigs*>**)UnitySDK::FromName("RPG.Client", "LittleGameUtils")->GetStaticField(0x2DA98);
		}

		static ::System::Boolean* StaticGet__IsLittleGameCameraModeOn()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "LittleGameUtils")->GetStaticField(0x9820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_CCTOR_OFFSET))();
		}

		static ::HCLPKMIIANI* GetLittleGameInstance(::RPG::GameCore::GameEntity* a1)
		{
			return ((::HCLPKMIIANI*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_OFFSET))(a1);
		}

		static ::System::Boolean GetLittleGameInstance_1(::RPG::GameCore::TaskContext* a1, ::HCLPKMIIANI* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGameManager* GetLittleGameManager()
		{
			return ((::RPG::Client::LittleGameManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEMANAGER_OFFSET))();
		}

		static ::System::Boolean GetLittleGameLevelConfig(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMELEVELCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean InitGameWithLevelConfig(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::GameEntity* a2, ::HCLPKMIIANI* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::GameEntity*, ::HCLPKMIIANI*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_INITGAMEWITHLEVELCONFIG_OFFSET))(a1, a2, a3, a4);
		}

		static ::HCLPKMIIANI* InitDiceCombatGameInstance(::RPG::GameCore::GameEntity* a1, ::FENBIHEDDPB* a2)
		{
			return ((::HCLPKMIIANI*(*)(::RPG::GameCore::GameEntity*, ::FENBIHEDDPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_INITDICECOMBATGAMEINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Void StopCurrentGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_STOPCURRENTGAME_OFFSET))();
		}

		static ::System::Boolean HasCurrentGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_HASCURRENTGAME_OFFSET))();
		}

		static ::System::Void DestroyGameInstanceEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_DESTROYGAMEINSTANCEENTITY_OFFSET))(a1);
		}

		static ::System::Void UnloadGameConfig(::RPG::GameCore::LittleGameType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_UNLOADGAMECONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LittleGamePresetConfigs* GetEntityPresetConfig(::RPG::GameCore::LittleGameType a1)
		{
			return ((::RPG::GameCore::LittleGamePresetConfigs*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LittleGameEntityPreset* GetEntityPreset(::RPG::GameCore::LittleGameType a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::LittleGameEntityPreset*(*)(::RPG::GameCore::LittleGameType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESET_OFFSET))(a1, a2);
		}

		static ::System::String* GetEntityPresetConfigPath(::RPG::GameCore::LittleGameType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_OFFSET))(a1);
		}

		static ::System::String* GetEntityPresetConfigPath_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_1_OFFSET))(a1);
		}

		static ::System::Void TriggerLittleGameCustomEvent(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void TriggerLittleGameCustomEvent_1(::HCLPKMIIANI* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::HCLPKMIIANI*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(a1, a2);
		}

		static ::System::Void TriggerLittleGameCustomEvent_2(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TriggerLittleGameCustomEvent_3(::HCLPKMIIANI* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::HCLPKMIIANI*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddLittleGameCustomEventListener(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddLittleGameCustomEventListener_1(::HCLPKMIIANI* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::HCLPKMIIANI*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddLittleGameCustomEventListener_2(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AddLittleGameCustomEventListener_3(::HCLPKMIIANI* a1, ::System::UInt32 a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::HCLPKMIIANI*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RemoveLittleGameCustomEventListener(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveLittleGameCustomEventListener_1(::HCLPKMIIANI* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::HCLPKMIIANI*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveLittleGameCustomEventListener_2(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RemoveLittleGameCustomEventListener_3(::HCLPKMIIANI* a1, ::System::UInt32 a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::HCLPKMIIANI*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetLittleGameCameraMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_SETLITTLEGAMECAMERAMODE_OFFSET))(a1);
		}

		static ::System::Boolean IsLittleGamePrefer4x3VCamera()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ISLITTLEGAMEPREFER4X3VCAMERA_OFFSET))();
		}

		static ::System::Void ClearCachedConfigs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_CLEARCACHEDCONFIGS_OFFSET))();
		}

	};
}
