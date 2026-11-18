#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BlendModeType.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TrackType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/FEPJEADBIHG.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_APPLYINERTIALVELOCITY_OFFSET UNITYSDK_OFFSET(0x12B56B20)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_OFFSET UNITYSDK_OFFSET(0x6EDF00)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_RECURSION_OFFSET UNITYSDK_OFFSET(0x6EDF10)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GENERATEDNEXTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x6EDF30)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GETCURBULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x6EDED0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_INITNEXTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x6EDF20)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x6EDCD0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x6EDCE0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONRETARGET_OFFSET UNITYSDK_OFFSET(0x6EDDB0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONTARGETLOST_OFFSET UNITYSDK_OFFSET(0x6EDE10)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x6EDD50)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSGUIDANCEMOVE_OFFSET UNITYSDK_OFFSET(0x6EDE90)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACKMOVE_OFFSET UNITYSDK_OFFSET(0x6EDEC0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_FIXEDSPEED_OFFSET UNITYSDK_OFFSET(0x6EDF70)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_IMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x6EDF80)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSTRACK_OFFSET UNITYSDK_OFFSET(0x6EDEA0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_RESETTARGETTRACKING_OFFSET UNITYSDK_OFFSET(0x6EDE70)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_SYNCPOSITIONFROMBULLET_OFFSET UNITYSDK_OFFSET(0x6EDE80)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_TRACEDATA_OFFSET UNITYSDK_OFFSET(0x6EDEF0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_UPDATETRACKSTATE_OFFSET UNITYSDK_OFFSET(0x6EDEB0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TraceModule_TypeDefinitionIndex = 86833;

	struct alignas(8) TraceModule
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 SampleFrequency; // 0x14
		::System::Boolean EnableRandomTrackTimeConfig; // 0x18
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 TrackTime; // 0x1C
		::UnityEngine::Vector2 StartTrackZone; // 0x24
		::UnityEngine::Vector2 EndTrackZone; // 0x2C
		::System::Single MinTrackStartDistance; // 0x34
		::MoleMole::MonoEffectContrllerModule::BlendModeType TrackBlendType; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* BlendCurve; // 0x40
		::System::Single ForceStopTrackDistance; // 0x48
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* VelocityAdditional; // 0x50
		::MoleMole::MonoEffectContrllerModule::TrackType TrackMode; // 0x58
		::System::Single AngularSpeed; // 0x5C
		::UnityEngine::AnimationCurve* AngularCurve; // 0x60
		::System::Single RedirectionTime; // 0x68
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* TurnCurve; // 0x70

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnRetarget(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONRETARGET_OFFSET))(this, controller);
		}

		::System::Void OnTargetLost(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_ONTARGETLOST_OFFSET))(this, controller);
		}

		::System::Void ResetTargetTracking(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller, ::System::Boolean enableRuntimeTrack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_RESETTARGETTRACKING_OFFSET))(this, controller, enableRuntimeTrack);
		}

		::System::Void SyncPositionFromBullet(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_SYNCPOSITIONFROMBULLET_OFFSET))(this, controller);
		}

		static ::System::Void ApplyInertialVelocity(::FEPJEADBIHG& context, ::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::System::Void(*)(::FEPJEADBIHG&, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_APPLYINERTIALVELOCITY_OFFSET))(context, particle);
		}

		::System::Boolean ProcessGuidanceMove(::FEPJEADBIHG& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEPJEADBIHG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSGUIDANCEMOVE_OFFSET))(this, context);
		}

		::System::Void ProcessTrack(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSTRACK_OFFSET))(this, controller);
		}

		::System::Void UpdateTrackState(::FEPJEADBIHG& context)
		{
			return ((::System::Void(*)(::PVOID, ::FEPJEADBIHG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_UPDATETRACKSTATE_OFFSET))(this, context);
		}

		::System::Void ProcessRuntimeTrackMove(::FEPJEADBIHG& context)
		{
			return ((::System::Void(*)(::PVOID, ::FEPJEADBIHG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACKMOVE_OFFSET))(this, context);
		}

		::UnityEngine::Vector3 GetCurBulletPosition(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GETCURBULLETPOSITION_OFFSET))(this, controller);
		}

		::System::Void TraceData(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_TRACEDATA_OFFSET))(this, controller);
		}

		::System::Single ExecuteFragment(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_OFFSET))(this, controller, speed, deltaTime);
		}

		::System::Single ExecuteFragment_Recursion(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_EXECUTEFRAGMENT_RECURSION_OFFSET))(this, controller, speed, deltaTime);
		}

		::System::Void InitNextFragment(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_INITNEXTFRAGMENT_OFFSET))(this, controller);
		}

		::System::Void GeneratedNextFragment(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller, ::UnityEngine::Vector3 lastPosition, ::System::Single lastRate, ::System::Single step, ::System::Single targetDistance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_GENERATEDNEXTFRAGMENT_OFFSET))(this, controller, lastPosition, lastRate, step, targetDistance);
		}

		::System::Void ProcessRuntimeTrack_FixedSpeed(::FEPJEADBIHG& context)
		{
			return ((::System::Void(*)(::PVOID, ::FEPJEADBIHG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_FIXEDSPEED_OFFSET))(this, context);
		}

		::System::Void ProcessRuntimeTrack_Immediately(::FEPJEADBIHG& context)
		{
			return ((::System::Void(*)(::PVOID, ::FEPJEADBIHG&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEMODULE_PROCESSRUNTIMETRACK_IMMEDIATELY_OFFSET))(this, context);
		}
	};
}
