#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class KLKMCNOECAL;
namespace RPG::Client { class ElfCell; }
namespace RPG::Client { class ElfFarm; }
namespace RPG::Client { class ElfFarmGameplayManager; }
namespace RPG::Client { class ElfField; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE91860)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CREATELOCALENTITY_OFFSET UNITYSDK_OFFSET(0x1AE905D0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE91800)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE8F990)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0x1AE8FB20)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0x1AE90490)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FOCUSFARM_OFFSET UNITYSDK_OFFSET(0x1AE8FCA0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETCELL_OFFSET UNITYSDK_OFFSET(0x1AE90220)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFARM_OFFSET UNITYSDK_OFFSET(0x1AE903C0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1AE90090)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFOCUSFARM_OFFSET UNITYSDK_OFFSET(0x1AE90050)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1AE90690)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1AE8E230)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE8F9D0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0x1AE90640)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMEDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE8EDB0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x1AE8E620)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1AE906A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNFOCUSFARM_OFFSET UNITYSDK_OFFSET(0x1AE8FF10)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x1AE8EB30)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMEMPLOYEE_OFFSET UNITYSDK_OFFSET(0x1AE8F3A0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMS_OFFSET UNITYSDK_OFFSET(0x1AE8F130)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEBEGINDATAREPORT_OFFSET UNITYSDK_OFFSET(0x1AE914F0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEENDDATAREPORT_OFFSET UNITYSDK_OFFSET(0x1AE91670)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELLOAD_OFFSET UNITYSDK_OFFSET(0x1AE913B0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELUNLOAD_OFFSET UNITYSDK_OFFSET(0x1AE91460)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFEMPLOYEELEVELUPFINISH_OFFSET UNITYSDK_OFFSET(0x1AE91110)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFFARMCELLUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE911D0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x1AE91360)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1AE91160)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERENTITYEVENT_OFFSET UNITYSDK_OFFSET(0x1AE91220)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x1AE912C0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UNINITFARMS_OFFSET UNITYSDK_OFFSET(0x1AE8F830)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEARTFARMS_OFFSET UNITYSDK_OFFSET(0x1AE8EEF0)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMCROPSBYPHASE_OFFSET UNITYSDK_OFFSET(0x1AE8F400)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMEMPLOYEES_OFFSET UNITYSDK_OFFSET(0x1AE90940)
#define RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMS_OFFSET UNITYSDK_OFFSET(0x1AE90760)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmGameplayManager_TypeDefinitionIndex = 70612;

	class ElfFarmGameplayManager : public ::System::Object
	{
	public:
		::RPG::Client::RuntimeGroupManager* _RuntimeGroupRef; // 0x10
		::System::String* MatureCropsEffectPath; // 0x18
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::UnityEngine::Transform*>* _ArtFarmFieldRootMap; // 0x20
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x28
		::RPG::Client::ElfFarm* _CurFarm; // 0x30
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x38
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x40
		::RPG::GameCore::ElfRestaurantGameConfig* GameConfig; // 0x48
		::KLKMCNOECAL* BoardPrefab; // 0x50
		::RPG::GameCore::GameEntity* _OwnerGroupEntity; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _LoadedEmployeeList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::ElfFarm*>* _OwnerFarmMap; // 0x68
		::RPG::Client::TriggerEffectParamsRef _CropsEffectParamsRef; // 0x70
		::System::Int32 _SerializeNumber; // 0x80
		::System::Single _ContinueTime; // 0x84
		::System::UInt32 _OwnerEntityID; // 0x88
		::System::UInt32 _OwnerGroupEntityID; // 0x8C
		::System::Boolean _IsInitialized_k__BackingField; // 0x90
		::System::Boolean _IsReportStarted; // 0x91
		static ::System::String** StaticGet_ElfFarmBoardPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ElfFarmGameplayManager")->GetStaticField(0x1F630);
		}

		static ::System::String** StaticGet_FCV_IsPlantShow()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ElfFarmGameplayManager")->GetStaticField(0x1F638);
		}

		static ::System::String** StaticGet_CropsEffectPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ElfFarmGameplayManager")->GetStaticField(0x1F640);
		}

		static ::RPG::Client::ElfFarmGameplayManager** StaticGet_CurrentManager()
		{
			return (::RPG::Client::ElfFarmGameplayManager**)UnitySDK::FromName("RPG.Client", "ElfFarmGameplayManager")->GetStaticField(0x1F648);
		}

		static ::System::String** StaticGet__Gamekey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ElfFarmGameplayManager")->GetStaticField(0x1F650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void _UpdateArtFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEARTFARMS_OFFSET))(this);
		}

		::System::Void RuntimeDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_RUNTIMEDISPOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnProgressChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_ONPROGRESSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateFarmCropsByPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMCROPSBYPHASE_OFFSET))(this);
		}

		::System::Void FocusFarm(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FOCUSFARM_OFFSET))(this, a1);
		}

		::System::Void UnFocusFarm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_UNFOCUSFARM_OFFSET))(this);
		}

		::RPG::Client::ElfFarm* GetFocusFarm()
		{
			return ((::RPG::Client::ElfFarm*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFOCUSFARM_OFFSET))(this);
		}

		::RPG::Client::ElfField* GetField(::System::Int32 a1)
		{
			return ((::RPG::Client::ElfField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFIELD_OFFSET))(this, a1);
		}

		::RPG::Client::ElfCell* GetCell(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ElfCell*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETCELL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ElfFarm* GetFarm(::System::Int32 a1)
		{
			return ((::RPG::Client::ElfFarm*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GETFARM_OFFSET))(this, a1);
		}

		::RPG::Client::TriggerEffectParams* FireEffect(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TriggerEffectParams* FireEffectAsync(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_FIREEFFECTASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateLocalEntity(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_CREATELOCALENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_REFRESHENTITIES_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER_SET_ISINITIALIZED_OFFSET))(this, a1);
		}

		::System::Void _InitFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMS_OFFSET))(this);
		}

		::System::Void _UpdateFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMS_OFFSET))(this);
		}

		::System::Void _UnInitFarms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UNINITFARMS_OFFSET))(this);
		}

		::System::Void _InitFarmEmployee()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__INITFARMEMPLOYEE_OFFSET))(this);
		}

		::System::Void _UpdateFarmEmployees()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__UPDATEFARMEMPLOYEES_OFFSET))(this);
		}

		::System::Void _OnElfEmployeeLevelUpFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFEMPLOYEELEVELUPFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnScreenSizeChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONSCREENSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnElfFarmCellUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONELFFARMCELLUPDATE_OFFSET))(this, a1);
		}

		::System::Void _TriggerEntityEvent(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERENTITYEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void _TriggerGroupEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__TRIGGERGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnGroupEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnArtModelLoad(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELLOAD_OFFSET))(this, a1);
		}

		::System::Void _OnArtModelUnload(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__ONARTMODELUNLOAD_OFFSET))(this, a1);
		}

		::System::Void _MemoryPuzzleBeginDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEBEGINDATAREPORT_OFFSET))(this);
		}

		::System::Void _MemoryPuzzleEndDataReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGAMEPLAYMANAGER__MEMORYPUZZLEENDDATAREPORT_OFFSET))(this);
		}

	};
}
