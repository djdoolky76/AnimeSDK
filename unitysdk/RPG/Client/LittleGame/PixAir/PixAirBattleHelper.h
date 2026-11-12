#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class HJMFDDMHOJC;
class IJLIGGBIDBA;
class PMGIMPDMIKC;
namespace RPG::Client::LittleGame::PixAir { class PixAirGameInstance; }
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::PixAir { class IPixAirBattleAction; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirGhostManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEEB9F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_1_OFFSET UNITYSDK_OFFSET(0xDEEB800)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_OFFSET UNITYSDK_OFFSET(0xDEEB2F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_1_OFFSET UNITYSDK_OFFSET(0xDEEA7A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_OFFSET UNITYSDK_OFFSET(0xDEEA290)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_1_OFFSET UNITYSDK_OFFSET(0xDEEAFD0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_OFFSET UNITYSDK_OFFSET(0xDEEA990)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYEQUIPMENTSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xDEE9720)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_1_OFFSET UNITYSDK_OFFSET(0xDEE9240)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xDEE91A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xDEE9100)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMINSTANCE_OFFSET UNITYSDK_OFFSET(0xDEE8DD0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLESTARTHEALTH_OFFSET UNITYSDK_OFFSET(0xDEE93A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLETIME_OFFSET UNITYSDK_OFFSET(0xDEE89A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_1_OFFSET UNITYSDK_OFFSET(0xDEE9A60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_OFFSET UNITYSDK_OFFSET(0xDEEA090)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETENEMYPLANEVIEWRESPATH_OFFSET UNITYSDK_OFFSET(0xDEE9670)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xDEE8710)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMESTATE_OFFSET UNITYSDK_OFFSET(0xDEE8880)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETLEVELCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDEE87F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETPLAYERPLANEVIEWRESPATH_OFFSET UNITYSDK_OFFSET(0xDEEA140)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETRANDOMBROADCASTTEXT_OFFSET UNITYSDK_OFFSET(0xDEEA1F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xDEE8C80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_NORMALIZEHEALTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xDEE9960)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETPLANETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDEE8600)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xDEE8B30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_STARTPIXAIRGAME_OFFSET UNITYSDK_OFFSET(0xDEE8150)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__BUILDSKILLSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xDEE9E20)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__CREATEEQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xDEE8E80)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirBattleHelper_TypeDefinitionIndex = 79620;

	class PixAirBattleHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_s_EffectsNeedInitRenderCache()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "PixAirBattleHelper")->GetStaticField(0x39580);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_SHIELD_LIMIT()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "PixAirBattleHelper")->GetStaticField(0xC8D0);
		}

		// static const ::System::String* DEFAULT_PLANE_VIEW_RES_PATH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CCTOR_OFFSET))();
		}

		static ::RPG::Client::PixAir::PixAirGhostManager* StartPixAirGame(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1, ::RPG::Client::PixAir::IPixAirBattleAction* a2)
		{
			return ((::RPG::Client::PixAir::PixAirGhostManager*(*)(::RPG::Client::LittleGame::PixAir::PixAirLevelController*, ::RPG::Client::PixAir::IPixAirBattleAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_STARTPIXAIRGAME_OFFSET))(a1, a2);
		}

		static ::System::Void SetPlaneTransform(::HJMFDDMHOJC* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::HJMFDDMHOJC*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETPLANETRANSFORM_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirGameInstance* GetGameInstance()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMEINSTANCE_OFFSET))();
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirLevelController* GetLevelController()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirLevelController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETLEVELCONTROLLER_OFFSET))();
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirGameState GetGameState()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirGameState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETGAMESTATE_OFFSET))();
		}

		static ::System::Single GetBattleTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLETIME_OFFSET))();
		}

		static ::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_SETTIMESCALE_OFFSET))(a1);
		}

		static ::System::Single GetTimeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETTIMESCALE_OFFSET))();
		}

		static ::PMGIMPDMIKC* CreateEquipmentSnapshotFromInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::System::Int32 a2)
		{
			return ((::PMGIMPDMIKC*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMINSTANCE_OFFSET))(a1, a2);
		}

		static ::PMGIMPDMIKC* CreateEquipmentSnapshotFromConfig(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::GameCore::PixAirEnchantmentType a4)
		{
			return ((::PMGIMPDMIKC*(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEEQUIPMENTSNAPSHOTFROMCONFIG_OFFSET))(a1, a2, a3, a4);
		}

		static ::HJMFDDMHOJC* CreateEnemyPlaneSnapshot(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::PixAir::PixAirLevelController* a3)
		{
			return ((::HJMFDDMHOJC*(*)(::System::UInt32, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_OFFSET))(a1, a2, a3);
		}

		static ::HJMFDDMHOJC* CreateEnemyPlaneSnapshot_1(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::PixAir::PixAirLevelController* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::HJMFDDMHOJC*(*)(::System::UInt32, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYPLANESNAPSHOT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint GetBattleStartHealth(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETBATTLESTARTHEALTH_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NormalizeHealthPercentage(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_NORMALIZEHEALTHPERCENTAGE_OFFSET))(a1);
		}

		static ::PMGIMPDMIKC* _CreateEquipmentSnapshot(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PixAirEnchantmentType a3, ::System::Int32 a4)
		{
			return ((::PMGIMPDMIKC*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PixAirEnchantmentType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__CREATEEQUIPMENTSNAPSHOT_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::IJLIGGBIDBA*>* _BuildSkillSnapshots(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::IJLIGGBIDBA*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER__BUILDSKILLSNAPSHOTS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEffectiveSkillList(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetEffectiveSkillList_1(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PixAirEnchantmentType a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETEFFECTIVESKILLLIST_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetEnemyPlaneViewResPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETENEMYPLANEVIEWRESPATH_OFFSET))(a1);
		}

		static ::System::String* GetPlayerPlaneViewResPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETPLAYERPLANEVIEWRESPATH_OFFSET))(a1);
		}

		static ::Il2CppArray<::PMGIMPDMIKC*>* CreateEnemyEquipmentSnapshots(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::PMGIMPDMIKC*>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_CREATEENEMYEQUIPMENTSNAPSHOTS_OFFSET))(a1, a2);
		}

		static ::System::String* GetRandomBroadcastText()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_GETRANDOMBROADCASTTEXT_OFFSET))();
		}

		static ::System::Int32 ComputeDamage(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeDamage_1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEDAMAGE_1_OFFSET))(a1);
		}

		static ::System::Int32 ComputeShield(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_OFFSET))(a1);
		}

		static ::System::Int32 ComputeShield_1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTESHIELD_1_OFFSET))(a1);
		}

		static ::System::Int32 ComputeBurn(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_OFFSET))(a1);
		}

		static ::System::Int32 ComputeBurn_1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBATTLEHELPER_COMPUTEBURN_1_OFFSET))(a1);
		}

	};
}
