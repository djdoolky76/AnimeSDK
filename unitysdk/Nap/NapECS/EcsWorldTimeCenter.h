#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeCenter_RunningPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Nap/NapECS/SyncTimeContext.h"
#include "unitysdk/Nap/NapECS/SyncTimestamp.h"

namespace Nap::NapECS { class ScaledEcsWorldFixedTimeline; }
namespace Nap::NapECS { class ScaledEcsWorldTimeline; }
namespace Nap::NapECS { class UnscaledEcsWorldFixedTimeline; }
namespace Nap::NapECS { class UnscaledEcsWorldTimeline; }

#define NAP_NAPECS_ECSWORLDTIMECENTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE195E0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE1B9A0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_FIXEDSTEP_OFFSET UNITYSDK_OFFSET(0x1CE1B2B0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1CE20EE0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_GET_SCALEDFIXEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F60)
#define NAP_NAPECS_ECSWORLDTIMECENTER_GET_SCALEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F40)
#define NAP_NAPECS_ECSWORLDTIMECENTER_GET_UNSCALEDFIXEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F20)
#define NAP_NAPECS_ECSWORLDTIMECENTER_GET_UNSCALEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F00)
#define NAP_NAPECS_ECSWORLDTIMECENTER_INITFIXEDSTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1CE21510)
#define NAP_NAPECS_ECSWORLDTIMECENTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CE1B0A0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_INITSTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1CE21470)
#define NAP_NAPECS_ECSWORLDTIMECENTER_INNERSTEPPHASEVALIDCHECK_OFFSET UNITYSDK_OFFSET(0x1CE217D0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_ISTIMELINEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CE213D0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_ONECSWORLDFIXEDUPDATESTARTINFRAME_OFFSET UNITYSDK_OFFSET(0x1CE21980)
#define NAP_NAPECS_ECSWORLDTIMECENTER_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x1CE20EF0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_SET_SCALEDFIXEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F70)
#define NAP_NAPECS_ECSWORLDTIMECENTER_SET_SCALEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F50)
#define NAP_NAPECS_ECSWORLDTIMECENTER_SET_UNSCALEDFIXEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F30)
#define NAP_NAPECS_ECSWORLDTIMECENTER_SET_UNSCALEDTIMELINE_OFFSET UNITYSDK_OFFSET(0x1CE20F10)
#define NAP_NAPECS_ECSWORLDTIMECENTER_START_OFFSET UNITYSDK_OFFSET(0x1CE1B120)
#define NAP_NAPECS_ECSWORLDTIMECENTER_STEP_OFFSET UNITYSDK_OFFSET(0x1CE1B1B0)
#define NAP_NAPECS_ECSWORLDTIMECENTER_STOP_OFFSET UNITYSDK_OFFSET(0x1CE1B6E0)
#define NAP_NAPECS_ECSWORLDTIMECENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE20F80)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_TypeDefinitionIndex = 35935;

	class EcsWorldTimeCenter : public ::System::Object
	{
	public:
		::Nap::NapECS::UnscaledEcsWorldFixedTimeline* _UnscaledFixedTimeline_k__BackingField; // 0x10
		::Nap::NapECS::ScaledEcsWorldFixedTimeline* _ScaledFixedTimeline_k__BackingField; // 0x18
		::Nap::NapECS::UnscaledEcsWorldTimeline* _UnscaledTimeline_k__BackingField; // 0x20
		::Nap::NapECS::ScaledEcsWorldTimeline* _ScaledTimeline_k__BackingField; // 0x28
		::Nap::NapECS::EcsWorldTimeCenter_RunningPhase _Phase_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER__CTOR_OFFSET))(this);
		}

		::Nap::NapECS::EcsWorldTimeCenter_RunningPhase get_Phase()
		{
			return ((::Nap::NapECS::EcsWorldTimeCenter_RunningPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::Nap::NapECS::EcsWorldTimeCenter_RunningPhase value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorldTimeCenter_RunningPhase))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_SET_PHASE_OFFSET))(this, value);
		}

		::Nap::NapECS::UnscaledEcsWorldTimeline* get_UnscaledTimeline()
		{
			return ((::Nap::NapECS::UnscaledEcsWorldTimeline*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_GET_UNSCALEDTIMELINE_OFFSET))(this);
		}

		::System::Void set_UnscaledTimeline(::Nap::NapECS::UnscaledEcsWorldTimeline* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::UnscaledEcsWorldTimeline*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_SET_UNSCALEDTIMELINE_OFFSET))(this, value);
		}

		::Nap::NapECS::UnscaledEcsWorldFixedTimeline* get_UnscaledFixedTimeline()
		{
			return ((::Nap::NapECS::UnscaledEcsWorldFixedTimeline*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_GET_UNSCALEDFIXEDTIMELINE_OFFSET))(this);
		}

		::System::Void set_UnscaledFixedTimeline(::Nap::NapECS::UnscaledEcsWorldFixedTimeline* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::UnscaledEcsWorldFixedTimeline*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_SET_UNSCALEDFIXEDTIMELINE_OFFSET))(this, value);
		}

		::Nap::NapECS::ScaledEcsWorldTimeline* get_ScaledTimeline()
		{
			return ((::Nap::NapECS::ScaledEcsWorldTimeline*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_GET_SCALEDTIMELINE_OFFSET))(this);
		}

		::System::Void set_ScaledTimeline(::Nap::NapECS::ScaledEcsWorldTimeline* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ScaledEcsWorldTimeline*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_SET_SCALEDTIMELINE_OFFSET))(this, value);
		}

		::Nap::NapECS::ScaledEcsWorldFixedTimeline* get_ScaledFixedTimeline()
		{
			return ((::Nap::NapECS::ScaledEcsWorldFixedTimeline*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_GET_SCALEDFIXEDTIMELINE_OFFSET))(this);
		}

		::System::Void set_ScaledFixedTimeline(::Nap::NapECS::ScaledEcsWorldFixedTimeline* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ScaledEcsWorldFixedTimeline*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_SET_SCALEDFIXEDTIMELINE_OFFSET))(this, value);
		}

		static ::Nap::NapECS::EcsWorldTimeCenter* Create()
		{
			return ((::Nap::NapECS::EcsWorldTimeCenter*(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Start()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_START_OFFSET))(this);
		}

		::System::Boolean Initialize(::Nap::NapECS::SyncTimestamp& syncTimestamp, ::Nap::NapECS::SyncTimestamp& fixedSyncTimestamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::SyncTimestamp&, ::Nap::NapECS::SyncTimestamp&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_INITIALIZE_OFFSET))(this, syncTimestamp, fixedSyncTimestamp);
		}

		::System::Boolean InitStartTimestamp(::Nap::NapECS::SyncTimestamp& syncTimestamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::SyncTimestamp&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_INITSTARTTIMESTAMP_OFFSET))(this, syncTimestamp);
		}

		::System::Boolean InitFixedStartTimestamp(::Nap::NapECS::SyncTimestamp& syncTimestamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::SyncTimestamp&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_INITFIXEDSTARTTIMESTAMP_OFFSET))(this, syncTimestamp);
		}

		::System::Boolean Stop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_STOP_OFFSET))(this);
		}

		::System::Void Step(::Nap::NapECS::SyncTimeContext& timeContext)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::SyncTimeContext&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_STEP_OFFSET))(this, timeContext);
		}

		::System::Void FixedStep(::Nap::NapECS::SyncTimeContext& timeContext)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::SyncTimeContext&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_FIXEDSTEP_OFFSET))(this, timeContext);
		}

		::System::Void OnEcsWorldFixedUpdateStartInFrame(::System::Int32 prvFrameStart, ::System::Int32 curFrameStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_ONECSWORLDFIXEDUPDATESTARTINFRAME_OFFSET))(this, prvFrameStart, curFrameStart);
		}

		::System::Boolean IsTimelineInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_ISTIMELINEINITIALIZED_OFFSET))(this);
		}

		::System::Boolean InnerStepPhaseValidCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTIMECENTER_INNERSTEPPHASEVALIDCHECK_OFFSET))(this);
		}
	};
}
