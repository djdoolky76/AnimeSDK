#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKHCGCJIMHC.h"
#include "unitysdk/MoleMole/SurfSubsystem_GameState.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CJOHGDGHEFA;
class FHGHJDPHHEL;
class GLJLOMHIEIA;
namespace MoleMole { class UISummerEventSurfMainPageController; }
namespace MoleMole { class VehicleSplinePath; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SURFSUBSYSTEM_ADDNITRO_OFFSET UNITYSDK_OFFSET(0x1311D220)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYJUMPPLATFORM_OFFSET UNITYSDK_OFFSET(0x131210A0)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYMAGNET_OFFSET UNITYSDK_OFFSET(0x13121170)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYSPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x13120F60)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYSUPERSTAR_OFFSET UNITYSDK_OFFSET(0x13121220)
#define MOLEMOLE_SURFSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET UNITYSDK_OFFSET(0x1311D3C0)
#define MOLEMOLE_SURFSUBSYSTEM_FAKEINPUT_OFFSET UNITYSDK_OFFSET(0x13120EE0)
#define MOLEMOLE_SURFSUBSYSTEM_FINISH_OFFSET UNITYSDK_OFFSET(0x131201B0)
#define MOLEMOLE_SURFSUBSYSTEM_GETPLAYERVEHICLE_OFFSET UNITYSDK_OFFSET(0x1311D100)
#define MOLEMOLE_SURFSUBSYSTEM_GETRATIOANDRANK_OFFSET UNITYSDK_OFFSET(0x1311D140)
#define MOLEMOLE_SURFSUBSYSTEM_GETUIDRIFTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1311EB00)
#define MOLEMOLE_SURFSUBSYSTEM_GET_AVERAGESPEED_OFFSET UNITYSDK_OFFSET(0x1311D960)
#define MOLEMOLE_SURFSUBSYSTEM_GET_LOCALAVATARSPEED_OFFSET UNITYSDK_OFFSET(0x1311D970)
#define MOLEMOLE_SURFSUBSYSTEM_GET_PASSEDTIME_OFFSET UNITYSDK_OFFSET(0x1311D940)
#define MOLEMOLE_SURFSUBSYSTEM_MUTEINPUT_OFFSET UNITYSDK_OFFSET(0x13120E90)
#define MOLEMOLE_SURFSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1311D990)
#define MOLEMOLE_SURFSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1311DC60)
#define MOLEMOLE_SURFSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1311E1A0)
#define MOLEMOLE_SURFSUBSYSTEM_ONGAMEENTER_OFFSET UNITYSDK_OFFSET(0x1311EC30)
#define MOLEMOLE_SURFSUBSYSTEM_ONGAMEEXIT_OFFSET UNITYSDK_OFFSET(0x1311DF20)
#define MOLEMOLE_SURFSUBSYSTEM_ONGAMERUN_OFFSET UNITYSDK_OFFSET(0x1311FEC0)
#define MOLEMOLE_SURFSUBSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x131206C0)
#define MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFITEMGET_OFFSET UNITYSDK_OFFSET(0x1311CCD0)
#define MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1311D2C0)
#define MOLEMOLE_SURFSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1311E530)
#define MOLEMOLE_SURFSUBSYSTEM_OPENUI_OFFSET UNITYSDK_OFFSET(0x13120050)
#define MOLEMOLE_SURFSUBSYSTEM_OVERRIDEDRIFTPARAMS_OFFSET UNITYSDK_OFFSET(0x131212A0)
#define MOLEMOLE_SURFSUBSYSTEM_REGISTERENTITYASVEHICLE_OFFSET UNITYSDK_OFFSET(0x1311F330)
#define MOLEMOLE_SURFSUBSYSTEM_SETENTITYASAVATAR_OFFSET UNITYSDK_OFFSET(0x1311FB60)
#define MOLEMOLE_SURFSUBSYSTEM_SET_PASSEDTIME_OFFSET UNITYSDK_OFFSET(0x1311D950)
#define MOLEMOLE_SURFSUBSYSTEM_UPDATEBYMAINPAGE_OFFSET UNITYSDK_OFFSET(0x13120840)
#define MOLEMOLE_SURFSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13121410)
#define MOLEMOLE_SURFSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13121380)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13121480)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13121510)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x131215A0)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13121640)

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_TypeDefinitionIndex = 82091;

	class SurfSubsystem
	{
	public:
		static ::System::Int32* StaticGet_DRIFT_RIGHT_TUTORIAL_NEWBIE_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SurfSubsystem_TypeDefinitionIndex)->GetStaticField(0xB200);
		}
		static ::System::Int32* StaticGet_DRIFT_LEFT_TUTORIAL_NEWBIE_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SurfSubsystem_TypeDefinitionIndex)->GetStaticField(0xB204);
		}
		static ::System::UInt32* StaticGet_Parameter_2_1_Surfing_Brake_Energy()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SurfSubsystem_TypeDefinitionIndex)->GetStaticField(0xB208);
		}
		// static const ::System::String* SURF_HIDE_BATTLEUI_TAG; // 0x0
		::System::Collections::Generic::List_1<::FHGHJDPHHEL*>* _vehicleList; // 0x10
		::FHGHJDPHHEL* _playerVehicle; // 0x18
		::MoleMole::UISummerEventSurfMainPageController* _mainPage; // 0x20
		::CJOHGDGHEFA* _surfCamera; // 0x28
		::MoleMole::VehicleSplinePath* path; // 0x30
		::System::Single fixedTime; // 0x38
		::System::Single _fakeInputTime; // 0x3C
		::System::Single _totalSpeed; // 0x40
		::System::Int32 _fakeInputSteer; // 0x44
		::System::Single _PassedTime_k__BackingField; // 0x48
		::System::Single _totalFrame; // 0x4C
		::System::Int32 _surfTriggerCount; // 0x50
		::MoleMole::SurfSubsystem_GameState _gameState; // 0x54
		::System::Boolean _fakeInputBoost; // 0x58
		::System::Boolean _fakeInputDrift; // 0x59
		::System::Boolean _muteInput; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnSummerSurfItemGet(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFITEMGET_OFFSET))(this, eventArgs);
		}

		static ::System::Boolean GetRatioAndRank(::GLJLOMHIEIA* template_, ::System::Int32 value, ::System::Single& ratio, ::JKHCGCJIMHC& rank)
		{
			return ((::System::Boolean(*)(::GLJLOMHIEIA*, ::System::Int32, ::System::Single&, ::JKHCGCJIMHC&))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GETRATIOANDRANK_OFFSET))(template_, value, ratio, rank);
		}

		::System::Void OnSummerSurfTriggerEnter(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFTRIGGERENTER_OFFSET))(this, eventArgs);
		}

		static ::System::Boolean CanPickUpSummerSurfDropItem(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET))(entity);
		}

		::System::Single get_PassedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GET_PASSEDTIME_OFFSET))(this);
		}

		::System::Void set_PassedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_SET_PASSEDTIME_OFFSET))(this, value);
		}

		::System::Single get_AverageSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GET_AVERAGESPEED_OFFSET))(this);
		}

		::System::Single get_LocalAvatarSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GET_LOCALAVATARSPEED_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnGameEnter(::MoleMole::Battle::Entity* playerEntity, ::System::String* pathName, ::System::Boolean isReverse, ::System::String* spawnPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONGAMEENTER_OFFSET))(this, playerEntity, pathName, isReverse, spawnPoint);
		}

		::System::Void OnGameRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONGAMERUN_OFFSET))(this);
		}

		::MoleMole::UISummerEventSurfMainPageController* OpenUI()
		{
			return ((::MoleMole::UISummerEventSurfMainPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_OPENUI_OFFSET))(this);
		}

		::System::Void OnGameExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONGAMEEXIT_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_FINISH_OFFSET))(this);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void MuteInput(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_MUTEINPUT_OFFSET))(this, mute);
		}

		::System::Void FakeInput(::System::Int32 steer, ::System::Boolean boost, ::System::Boolean drift, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_FAKEINPUT_OFFSET))(this, steer, boost, drift, duration);
		}

		::System::Void UpdateByMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_UPDATEBYMAINPAGE_OFFSET))(this);
		}

		::FHGHJDPHHEL* GetPlayerVehicle()
		{
			return ((::FHGHJDPHHEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GETPLAYERVEHICLE_OFFSET))(this);
		}

		::System::Single GetUIDriftPercentage(::FHGHJDPHHEL* context)
		{
			return ((::System::Single(*)(::PVOID, ::FHGHJDPHHEL*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GETUIDRIFTPERCENTAGE_OFFSET))(this, context);
		}

		::System::Void AddNitro(::FHGHJDPHHEL* vehicle, ::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ADDNITRO_OFFSET))(this, vehicle, amount);
		}

		::System::Void ApplySpeedCurve(::FHGHJDPHHEL* vehicle, ::System::Boolean isAcceleration, ::UnityEngine::AnimationCurve* speedCurve, ::System::Single duration, ::System::Single minSpeed, ::System::Single maxSpeed, ::System::Single additionalSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYSPEEDCURVE_OFFSET))(this, vehicle, isAcceleration, speedCurve, duration, minSpeed, maxSpeed, additionalSpeed);
		}

		::System::Void ApplyJumpPlatform(::FHGHJDPHHEL* vehicle, ::System::Single verticalSpeed, ::System::Single horizontalSpeed, ::System::Boolean syncSpeedYaw, ::System::Single speedYaw)
		{
			return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYJUMPPLATFORM_OFFSET))(this, vehicle, verticalSpeed, horizontalSpeed, syncSpeedYaw, speedYaw);
		}

		::System::Void ApplyMagnet(::FHGHJDPHHEL* vehicle, ::System::Single magnetTime, ::System::Single magnetRangeX, ::System::Single magnetRangeZ)
		{
			return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYMAGNET_OFFSET))(this, vehicle, magnetTime, magnetRangeX, magnetRangeZ);
		}

		::System::Void ApplySuperStar(::FHGHJDPHHEL* vehicle, ::System::Single superStarTime)
		{
			return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYSUPERSTAR_OFFSET))(this, vehicle, superStarTime);
		}

		::System::Void OverrideDriftParams(::FHGHJDPHHEL* vehicle, ::System::Boolean enable, ::System::Int32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::FHGHJDPHHEL*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_OVERRIDEDRIFTPARAMS_OFFSET))(this, vehicle, enable, configId);
		}

		::System::Void RegisterEntityAsVehicle(::MoleMole::Battle::Entity* entity, ::System::String* configKey, ::System::String* spawnPointName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_REGISTERENTITYASVEHICLE_OFFSET))(this, entity, configKey, spawnPointName);
		}

		::System::Void SetEntityAsAvatar(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_SETENTITYASAVATAR_OFFSET))(this, entity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
