#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class KBKJEDAFBDO;
class KGDADKNPPOL;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManagerDebug; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class EraRegion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ERAFLIPPERMANAGER_ADDIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x1A6FD4B0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ADDPARTIALFLIPDEVICE_OFFSET UNITYSDK_OFFSET(0x1A6FC4E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_COLLIDERSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1A700490)
#define RPG_CLIENT_ERAFLIPPERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F9BF0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6FC820)
#define RPG_CLIENT_ERAFLIPPERMANAGER_EXITLIGHTDEVICECONTROL_OFFSET UNITYSDK_OFFSET(0x1A6FD1D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET UNITYSDK_OFFSET(0x1A6FDBB0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_FLIP_OFFSET UNITYSDK_OFFSET(0x1A6FB560)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GETERASTATETAG_OFFSET UNITYSDK_OFFSET(0x1A6FD3E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1A7005A0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERAREGIONID_OFFSET UNITYSDK_OFFSET(0x1A700280)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERASTATETAG_OFFSET UNITYSDK_OFFSET(0x1A7002E0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1A700330)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_FLIPSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1A6FB4D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISINVERSEALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1A700420)
#define RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISLIGHTDEVICETRANSITION_OFFSET UNITYSDK_OFFSET(0x1A6FD390)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A6FC620)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDYNAMICDEVICEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A6FC6A0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASANYFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x1A700340)
#define RPG_CLIENT_ERAFLIPPERMANAGER_HASFOLLOWPLAYERDEVICE_OFFSET UNITYSDK_OFFSET(0x1A7003B0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A6F9E60)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINANYLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x1A6FD320)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINCONTROLLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x1A6FD230)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISINLIGHTPROJECTVOLUME_OFFSET UNITYSDK_OFFSET(0x1A6FD290)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ISPARTIALFLIPDEVICEON_OFFSET UNITYSDK_OFFSET(0x1A6FC480)
#define RPG_CLIENT_ERAFLIPPERMANAGER_MANUALREFRESHDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x1A6FD0F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONFLIPDEVICETARGETSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A6FC5A0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONREGIONVISUALSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A6FF020)
#define RPG_CLIENT_ERAFLIPPERMANAGER_ONSWITCHDEVICE_OFFSET UNITYSDK_OFFSET(0x1A6FC220)
#define RPG_CLIENT_ERAFLIPPERMANAGER_PREDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6FC860)
#define RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEIGNOREENTITY_OFFSET UNITYSDK_OFFSET(0x1A6FD950)
#define RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEPARTIALFLIPDEVICE_OFFSET UNITYSDK_OFFSET(0x1A6FC540)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SETPROPERAFLIPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A6FBDC0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SET_COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1A7005B0)
#define RPG_CLIENT_ERAFLIPPERMANAGER_SHOULDDELAYPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A6FDB60)
#define RPG_CLIENT_ERAFLIPPERMANAGER_STARTLIGHTDEVICECONTROL_OFFSET UNITYSDK_OFFSET(0x1A6FD140)
#define RPG_CLIENT_ERAFLIPPERMANAGER_TRYFLIP_OFFSET UNITYSDK_OFFSET(0x1A6FB150)
#define RPG_CLIENT_ERAFLIPPERMANAGER_TRYPRESETCOLLIDERBEFOREFLIP_OFFSET UNITYSDK_OFFSET(0x1A6FB040)
#define RPG_CLIENT_ERAFLIPPERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A6FC780)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ENTERERAREGION_OFFSET UNITYSDK_OFFSET(0x1A6FA630)
#define RPG_CLIENT_ERAFLIPPERMANAGER__GRAPHICQUALITYCHANGE_OFFSET UNITYSDK_OFFSET(0x1A700200)
#define RPG_CLIENT_ERAFLIPPERMANAGER__INITGROUP_OFFSET UNITYSDK_OFFSET(0x1A6FDC40)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONENTER_OFFSET UNITYSDK_OFFSET(0x1A6FADB0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONLEAVE_OFFSET UNITYSDK_OFFSET(0x1A6FE980)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONERAFLIPREGIONSTATESYNC_OFFSET UNITYSDK_OFFSET(0x1A6FF890)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x1A6FF380)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONPLAYERMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0x1A6FFA80)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONTEAMLEADERCHANGE_OFFSET UNITYSDK_OFFSET(0x1A700100)
#define RPG_CLIENT_ERAFLIPPERMANAGER__ONTELEPORTFINISH_OFFSET UNITYSDK_OFFSET(0x1A6FFAD0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__PROCESSLEAVEREGION_OFFSET UNITYSDK_OFFSET(0x1A6FE9D0)
#define RPG_CLIENT_ERAFLIPPERMANAGER__REFRESHGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x1A6FBA40)
#define RPG_CLIENT_ERAFLIPPERMANAGER__SETPROPVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A6FBE30)
#define RPG_CLIENT_ERAFLIPPERMANAGER__SHOULDLOCKSTREAMINGGROUP_OFFSET UNITYSDK_OFFSET(0x1A6FF570)
#define RPG_CLIENT_ERAFLIPPERMANAGER__TRYLOCKSTREAMINGGROUP_OFFSET UNITYSDK_OFFSET(0x1A6FE7F0)
#define RPG_CLIENT_ERAFLIPPERMANAGER___ONERAFLIPREGIONSTATESYNC_B__37_0_OFFSET UNITYSDK_OFFSET(0x1A7005C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager_TypeDefinitionIndex = 61797;

	class EraFlipperManager : public ::System::Object
	{
	public:
		::RPG::Client::EraFlipperCommonConfig* _CommonConfig_k__BackingField; // 0x10
		::KGDADKNPPOL* CurrentStageRegion; // 0x18
		::RPG::Client::AdventurePhase* _AdventurePhase; // 0x20
		::RPG::GameCore::EraRegion* _CurrentEraRegion; // 0x28
		::RPG::GameCore::EraFlipperConfig* _FlipperConfig; // 0x30
		::RPG::Client::EraFlipperManagerDebug* _DebugMono; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* AlwaysVisibleGroupsDic; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _LockStreamingGroups; // 0x48
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* _AllActiveStageRegionsWithEra; // 0x50
		::KBKJEDAFBDO* _PartialFlipDevicePlugin; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _IgnoreEntityList; // 0x60
		::System::Boolean _PreviewSetColliderState; // 0x68
		::System::Boolean _ManualFlip; // 0x69
		::System::Boolean FollowDamping; // 0x6A
		::System::Boolean _PendingRefreshTaPlugin; // 0x6B
		::System::Boolean _InTeleport; // 0x6C
		::System::Boolean _Initialized; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single _FlipPerformDelayTime; // 0x70
		::RPG::GameCore::EraStateType _CurrentEraState; // 0x74
		// static const ::System::String* EraState1Tag; // 0x0
		// static const ::System::String* EraState2Tag; // 0x0
		// static const ::System::String* EraFlipperCommonConfigPath; // 0x0
		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::GameCore::EraFlipperConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void TryPresetColliderBeforeFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_TRYPRESETCOLLIDERBEFOREFLIP_OFFSET))(this);
		}

		::System::Void TryFlip(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_TRYFLIP_OFFSET))(this, a1, a2);
		}

		::System::Void Flip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_FLIP_OFFSET))(this);
		}

		::System::Void SetPropEraFlipVisible(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SETPROPERAFLIPVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSwitchDevice(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONSWITCHDEVICE_OFFSET))(this, a1);
		}

		::System::Boolean IsPartialFlipDeviceOn(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISPARTIALFLIPDEVICEON_OFFSET))(this, a1);
		}

		::System::Void AddPartialFlipDevice(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ADDPARTIALFLIPDEVICE_OFFSET))(this, a1);
		}

		::System::Void RemovePartialFlipDevice(::RPG::Client::PartialFlipDeviceComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEPARTIALFLIPDEVICE_OFFSET))(this, a1);
		}

		::System::Void OnFlipDeviceTargetStateChange(::RPG::Client::PartialFlipDeviceComponent* a1, ::RPG::Client::FlipDevicePoint* a2, ::RPG::Client::FlipDevicePoint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONFLIPDEVICETARGETSTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasAnyDeviceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDEVICEACTIVE_OFFSET))(this);
		}

		::System::Boolean HasAnyDynamicDeviceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYDYNAMICDEVICEACTIVE_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void PreDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_PREDISPOSE_OFFSET))(this);
		}

		::System::Void ManualRefreshDeviceState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_MANUALREFRESHDEVICESTATE_OFFSET))(this);
		}

		::System::Void StartLightDeviceControl(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_STARTLIGHTDEVICECONTROL_OFFSET))(this, a1);
		}

		::System::Void ExitLightDeviceControl(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_EXITLIGHTDEVICECONTROL_OFFSET))(this, a1);
		}

		::System::Boolean IsInControlLightProjectVolume(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINCONTROLLIGHTPROJECTVOLUME_OFFSET))(this, a1);
		}

		::System::Boolean IsInLightProjectVolume(::RPG::Client::PartialFlipDeviceComponent* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINLIGHTPROJECTVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInAnyLightProjectVolume(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PartialFlipDeviceComponent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ISINANYLIGHTPROJECTVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsLightDeviceTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISLIGHTDEVICETRANSITION_OFFSET))(this);
		}

		static ::System::String* GetEraStateTag(::RPG::GameCore::EraStateType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GETERASTATETAG_OFFSET))(a1);
		}

		::System::Void AddIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ADDIGNOREENTITY_OFFSET))(this, a1);
		}

		::System::Void RemoveIgnoreEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_REMOVEIGNOREENTITY_OFFSET))(this, a1);
		}

		::System::Boolean ShouldDelayPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SHOULDDELAYPERFORMANCE_OFFSET))(this);
		}

		::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> FillFollowingPlayerLightConeInfo()
		{
			return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_FILLFOLLOWINGPLAYERLIGHTCONEINFO_OFFSET))(this);
		}

		::System::Void _EnterEraRegion(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ENTERERAREGION_OFFSET))(this, a1);
		}

		::System::Void _OnCurrentRegionEnter(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnCurrentRegionLeave(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONCURRENTREGIONLEAVE_OFFSET))(this, a1);
		}

		::System::Void _ProcessLeaveRegion(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__PROCESSLEAVEREGION_OFFSET))(this, a1);
		}

		::System::Void OnRegionVisualStateChange(::KGDADKNPPOL* a1, ::RPG::GameCore::StageRegionActiveState a2, ::RPG::GameCore::StageRegionActiveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_ONREGIONVISUALSTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnGroupLoaded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONGROUPLOADED_OFFSET))(this, a1);
		}

		::System::Boolean _ShouldLockStreamingGroup(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__SHOULDLOCKSTREAMINGGROUP_OFFSET))(this, a1);
		}

		::System::Void _TryLockStreamingGroup(::RPG::Client::RuntimeGroupManager* a1, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager*, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__TRYLOCKSTREAMINGGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEraFlipRegionStateSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONERAFLIPREGIONSTATESYNC_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerMapTeleport(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONPLAYERMAPTELEPORT_OFFSET))(this, a1);
		}

		::System::Void _OnTeleportFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONTELEPORTFINISH_OFFSET))(this, a1);
		}

		::System::Void _InitGroup(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__INITGROUP_OFFSET))(this, a1);
		}

		::System::Void _RefreshGroupState(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__REFRESHGROUPSTATE_OFFSET))(this, a1);
		}

		::System::Void _SetPropVisible(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__SETPROPVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnTeamLeaderChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__ONTEAMLEADERCHANGE_OFFSET))(this, a1);
		}

		::System::Void _GraphicQualityChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER__GRAPHICQUALITYCHANGE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentEraRegionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERAREGIONID_OFFSET))(this);
		}

		::System::String* get_CurrentEraStateTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTERASTATETAG_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_CurrentStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_CURRENTSTATETYPE_OFFSET))(this);
		}

		::System::Boolean HasAnyFollowPlayerDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASANYFOLLOWPLAYERDEVICE_OFFSET))(this);
		}

		::System::Boolean HasFollowPlayerDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_HASFOLLOWPLAYERDEVICE_OFFSET))(this);
		}

		::System::Boolean get_IsInverseAllCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_ISINVERSEALLCOLLIDER_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType ColliderStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_COLLIDERSTATETYPE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_FlipStateType()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_FLIPSTATETYPE_OFFSET))(this);
		}

		::RPG::Client::EraFlipperCommonConfig* get_CommonConfig()
		{
			return ((::RPG::Client::EraFlipperCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_GET_COMMONCONFIG_OFFSET))(this);
		}

		::System::Void set_CommonConfig(::RPG::Client::EraFlipperCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER_SET_COMMONCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean __OnEraFlipRegionStateSync_b__37_0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___ONERAFLIPREGIONSTATESYNC_B__37_0_OFFSET))(this, a1);
		}

	};
}
