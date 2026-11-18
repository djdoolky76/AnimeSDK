#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class AnimationStateData; }
namespace Spine { class AnimationState_TrackEntryDelegate; }
namespace Spine { class AnimationState_TrackEntryEventDelegate; }
namespace Spine { class AttachmentTimeline; }
namespace Spine { class Event; }
namespace Spine { class EventQueue; }
namespace Spine { class RotateTimeline; }
namespace Spine { class Skeleton; }
namespace Spine { class Timeline; }
namespace Spine { class TrackEntry; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine { template <typename T> class Pool_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1F8B8920)
#define SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET UNITYSDK_OFFSET(0x1F8B8860)
#define SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1F8B8BC0)
#define SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x1F8B4550)
#define SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1F8B4310)
#define SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8B4210)
#define SPINE_ANIMATIONSTATE_ADD_END_OFFSET UNITYSDK_OFFSET(0x1F8B4110)
#define SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET UNITYSDK_OFFSET(0x1F8B4410)
#define SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1F8B4010)
#define SPINE_ANIMATIONSTATE_ADD_START_OFFSET UNITYSDK_OFFSET(0x1F8B3F10)
#define SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1F8B5AC0)
#define SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET UNITYSDK_OFFSET(0x1F8B65B0)
#define SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x1F8B7570)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET UNITYSDK_OFFSET(0x1F8B7A30)
#define SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1F8B5BF0)
#define SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET UNITYSDK_OFFSET(0x1F8B6820)
#define SPINE_ANIMATIONSTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F8B5150)
#define SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET UNITYSDK_OFFSET(0x1F8B4510)
#define SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1F8B9800)
#define SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET UNITYSDK_OFFSET(0x1F8B4F50)
#define SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET UNITYSDK_OFFSET(0x1F8B7E40)
#define SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET UNITYSDK_OFFSET(0x1F8B7EE0)
#define SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET UNITYSDK_OFFSET(0x1F8B8DF0)
#define SPINE_ANIMATIONSTATE_CREATEEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1F8B3D50)
#define SPINE_ANIMATIONSTATE_DELAYLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1F8B9850)
#define SPINE_ANIMATIONSTATE_EVENTSREVERSE_OFFSET UNITYSDK_OFFSET(0x1F8B6E60)
#define SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET UNITYSDK_OFFSET(0x1F8B8190)
#define SPINE_ANIMATIONSTATE_FROM_OFFSET UNITYSDK_OFFSET(0x1F8B9500)
#define SPINE_ANIMATIONSTATE_GETTRACK_OFFSET UNITYSDK_OFFSET(0x1F8B9750)
#define SPINE_ANIMATIONSTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1F8B98B0)
#define SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1F8B9890)
#define SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET UNITYSDK_OFFSET(0x1F8B9930)
#define SPINE_ANIMATIONSTATE_ISSUEDELAYEDLISTENERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1F8B9870)
#define SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET UNITYSDK_OFFSET(0x1F8B8690)
#define SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F8B3EF0)
#define SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8B3EE0)
#define SPINE_ANIMATIONSTATE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F8B3ED0)
#define SPINE_ANIMATIONSTATE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1F8B3F00)
#define SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1F8B3EC0)
#define SPINE_ANIMATIONSTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F8B3EB0)
#define SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET UNITYSDK_OFFSET(0x1F8B7270)
#define SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1F8B4390)
#define SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8B4290)
#define SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET UNITYSDK_OFFSET(0x1F8B4190)
#define SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET UNITYSDK_OFFSET(0x1F8B4490)
#define SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1F8B4090)
#define SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET UNITYSDK_OFFSET(0x1F8B3F90)
#define SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET UNITYSDK_OFFSET(0x1F8B8320)
#define SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x1F8B8260)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1F8B8CB0)
#define SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET UNITYSDK_OFFSET(0x1F8B8B30)
#define SPINE_ANIMATIONSTATE_SETTRACK_OFFSET UNITYSDK_OFFSET(0x1F8B4D50)
#define SPINE_ANIMATIONSTATE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1F8B98C0)
#define SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1F8B98A0)
#define SPINE_ANIMATIONSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8B9940)
#define SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET UNITYSDK_OFFSET(0x1F8B4FE0)
#define SPINE_ANIMATIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F8B49A0)
#define SPINE_ANIMATIONSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B9AF0)
#define SPINE_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B47E0)
#define SPINE_ANIMATIONSTATE___CTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1F8B9B10)

namespace Spine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 32944;

	class AnimationState : public ::System::Object
	{
	public:
		static ::Spine::Animation** StaticGet_EmptyAnimation()
		{
			return (::Spine::Animation**)Il2CppClass::FromTypeDefinitionIndex(AnimationState_TypeDefinitionIndex)->GetStaticField(0x29BE0);
		}
		// static const ::System::Int32 Current = 0x0; // 0x0
		// static const ::System::Int32 Setup = 0x1; // 0x0
		// static const ::System::Int32 First = 0x2; // 0x0
		// static const ::System::Int32 Mode = 0x3; // 0x0
		// static const ::System::Int32 Hold = 0x4; // 0x0
		// static const ::System::Int32 AttachSetup = 0x1; // 0x0
		// static const ::System::Int32 AttachRetain = 0x2; // 0x0
		::Spine::AnimationStateData* data; // 0x10
		::Spine::AnimationState_TrackEntryDelegate* Complete; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Spine::TrackEntry*>* propertyIds; // 0x20
		::Spine::AnimationState_TrackEntryDelegate* Start; // 0x28
		::Spine::ExposedList_1<::Spine::TrackEntry*>* tracks; // 0x30
		::Spine::AnimationState_TrackEntryDelegate* Dispose; // 0x38
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x40
		::Spine::AnimationState_TrackEntryEventDelegate* Event; // 0x48
		::Spine::AnimationState_TrackEntryDelegate* Interrupt; // 0x50
		::Spine::AnimationState_TrackEntryDelegate* End; // 0x58
		::Spine::EventQueue* queue; // 0x60
		::Spine::ExposedList_1<::Spine::Event*>* events; // 0x68
		::System::Single timeScale; // 0x70
		::System::Boolean animationsChanged; // 0x74
		::System::Byte _padding0[0x3];
		::System::Int32 unkeyedState; // 0x78

		::System::Void _ctor(::Spine::AnimationStateData* data)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationStateData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__CTOR_OFFSET))(this, data);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE__CCTOR_OFFSET))();
		}

		static ::Spine::Animation* CreateEmptyAnimation()
		{
			return ((::Spine::Animation*(*)())((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CREATEEMPTYANIMATION_OFFSET))();
		}

		::System::Void OnStart(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONSTART_OFFSET))(this, entry);
		}

		::System::Void OnInterrupt(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONINTERRUPT_OFFSET))(this, entry);
		}

		::System::Void OnEnd(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEND_OFFSET))(this, entry);
		}

		::System::Void OnDispose(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONDISPOSE_OFFSET))(this, entry);
		}

		::System::Void OnComplete(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONCOMPLETE_OFFSET))(this, entry);
		}

		::System::Void OnEvent(::Spine::TrackEntry* entry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ONEVENT_OFFSET))(this, entry, e);
		}

		::System::Void add_Start(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_START_OFFSET))(this, value);
		}

		::System::Void remove_Start(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_START_OFFSET))(this, value);
		}

		::System::Void add_Interrupt(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_INTERRUPT_OFFSET))(this, value);
		}

		::System::Void remove_Interrupt(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_INTERRUPT_OFFSET))(this, value);
		}

		::System::Void add_End(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_END_OFFSET))(this, value);
		}

		::System::Void remove_End(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_END_OFFSET))(this, value);
		}

		::System::Void add_Dispose(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_DISPOSE_OFFSET))(this, value);
		}

		::System::Void remove_Dispose(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_DISPOSE_OFFSET))(this, value);
		}

		::System::Void add_Complete(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_COMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_Complete(::Spine::AnimationState_TrackEntryDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_COMPLETE_OFFSET))(this, value);
		}

		::System::Void add_Event(::Spine::AnimationState_TrackEntryEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADD_EVENT_OFFSET))(this, value);
		}

		::System::Void remove_Event(::Spine::AnimationState_TrackEntryEventDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState_TrackEntryEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_REMOVE_EVENT_OFFSET))(this, value);
		}

		::System::Void AssignEventSubscribersFrom(::Spine::AnimationState* src)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ASSIGNEVENTSUBSCRIBERSFROM_OFFSET))(this, src);
		}

		::System::Void AddEventSubscribersFrom(::Spine::AnimationState* src)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEVENTSUBSCRIBERSFROM_OFFSET))(this, src);
		}

		::System::Void Update(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATE_OFFSET))(this, delta);
		}

		::System::Boolean UpdateMixingFrom(::Spine::TrackEntry* to, ::System::Single delta)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_UPDATEMIXINGFROM_OFFSET))(this, to, delta);
		}

		::System::Boolean Apply(::Spine::Skeleton* skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLY_OFFSET))(this, skeleton);
		}

		::System::Boolean ApplyEventTimelinesOnly(::Spine::Skeleton* skeleton, ::System::Boolean issueEvents)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYEVENTTIMELINESONLY_OFFSET))(this, skeleton, issueEvents);
		}

		::System::Single ApplyMixingFrom(::Spine::TrackEntry* to, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROM_OFFSET))(this, to, skeleton);
		}

		::System::Single ApplyMixingFromEventTimelinesOnly(::Spine::TrackEntry* to, ::Spine::Skeleton* skeleton, ::System::Boolean issueEvents)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYMIXINGFROMEVENTTIMELINESONLY_OFFSET))(this, to, skeleton, issueEvents);
		}

		::System::Void ApplyAttachmentTimeline(::Spine::AttachmentTimeline* timeline, ::Spine::Skeleton* skeleton, ::System::Single time, ::Spine::MixFrom from, ::System::Boolean retain)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentTimeline*, ::Spine::Skeleton*, ::System::Single, ::Spine::MixFrom, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYATTACHMENTTIMELINE_OFFSET))(this, timeline, skeleton, time, from, retain);
		}

		static ::System::Void ApplyRotateTimeline(::Spine::RotateTimeline* timeline, ::Spine::Skeleton* skeleton, ::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::Il2CppArray<::System::Single>* timelinesRotation, ::System::Int32 i, ::System::Boolean firstFrame)
		{
			return ((::System::Void(*)(::Spine::RotateTimeline*, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::MixFrom, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_APPLYROTATETIMELINE_OFFSET))(timeline, skeleton, time, alpha, from, timelinesRotation, i, firstFrame);
		}

		::System::Void QueueEvents(::Spine::TrackEntry* entry, ::System::Single animationTime)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_QUEUEEVENTS_OFFSET))(this, entry, animationTime);
		}

		::System::Void EventsReverse(::Spine::TrackEntry* entry, ::System::Single animationLast, ::System::Single animationTime)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_EVENTSREVERSE_OFFSET))(this, entry, animationLast, animationTime);
		}

		::System::Void ClearTracks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACKS_OFFSET))(this);
		}

		::System::Void ClearTrack(::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARTRACK_OFFSET))(this, trackIndex);
		}

		::System::Void SetTrack(::System::Int32 index, ::Spine::TrackEntry* current, ::System::Boolean interrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETTRACK_OFFSET))(this, index, current, interrupt);
		}

		::Spine::TrackEntry* SetAnimation(::System::Int32 trackIndex, ::System::String* animationName, ::System::Boolean loop)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_OFFSET))(this, trackIndex, animationName, loop);
		}

		::Spine::TrackEntry* SetAnimation_1(::System::Int32 trackIndex, ::Spine::Animation* animation, ::System::Boolean loop)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETANIMATION_1_OFFSET))(this, trackIndex, animation, loop);
		}

		::Spine::TrackEntry* AddAnimation(::System::Int32 trackIndex, ::System::String* animationName, ::System::Boolean loop, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_OFFSET))(this, trackIndex, animationName, loop, delay);
		}

		::Spine::TrackEntry* AddAnimation_1(::System::Int32 trackIndex, ::Spine::Animation* animation, ::System::Boolean loop, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDANIMATION_1_OFFSET))(this, trackIndex, animation, loop, delay);
		}

		::Spine::TrackEntry* SetEmptyAnimation(::System::Int32 trackIndex, ::System::Single mixDuration)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATION_OFFSET))(this, trackIndex, mixDuration);
		}

		::Spine::TrackEntry* AddEmptyAnimation(::System::Int32 trackIndex, ::System::Single mixDuration, ::System::Single delay)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ADDEMPTYANIMATION_OFFSET))(this, trackIndex, mixDuration, delay);
		}

		::System::Void SetEmptyAnimations(::System::Single mixDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SETEMPTYANIMATIONS_OFFSET))(this, mixDuration);
		}

		::Spine::TrackEntry* ExpandToIndex(::System::Int32 index)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_EXPANDTOINDEX_OFFSET))(this, index);
		}

		::Spine::TrackEntry* NewTrackEntry(::System::Int32 trackIndex, ::Spine::Animation* animation, ::System::Boolean loop, ::Spine::TrackEntry* last)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32, ::Spine::Animation*, ::System::Boolean, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_NEWTRACKENTRY_OFFSET))(this, trackIndex, animation, loop, last);
		}

		::System::Void ClearNext(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARNEXT_OFFSET))(this, entry);
		}

		::System::Void AnimationsChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ANIMATIONSCHANGED_OFFSET))(this);
		}

		::System::Void ComputeHold(::Spine::TrackEntry* entry, ::Spine::TrackEntry* track)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_COMPUTEHOLD_OFFSET))(this, entry, track);
		}

		::System::Int32 From(::Spine::TrackEntry* track, ::Spine::Timeline* timeline, ::Il2CppArray<::System::UInt64>* ids)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Timeline*, ::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_FROM_OFFSET))(this, track, timeline, ids);
		}

		::Spine::TrackEntry* GetTrack(::System::Int32 trackIndex)
		{
			return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GETTRACK_OFFSET))(this, trackIndex);
		}

		::System::Void ClearListenerNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_CLEARLISTENERNOTIFICATIONS_OFFSET))(this);
		}

		::System::Void DelayListenerNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_DELAYLISTENERNOTIFICATIONS_OFFSET))(this);
		}

		::System::Void IssueDelayedListenerNotifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_ISSUEDELAYEDLISTENERNOTIFICATIONS_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_TIMESCALE_OFFSET))(this, value);
		}

		::Spine::AnimationStateData* get_Data()
		{
			return ((::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Spine::AnimationStateData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationStateData*))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_SET_DATA_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::TrackEntry*>* get_Tracks()
		{
			return ((::Spine::ExposedList_1<::Spine::TrackEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_GET_TRACKS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE_TOSTRING_OFFSET))(this);
		}

		::System::Void __ctor_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATE___CTOR_B__46_0_OFFSET))(this);
		}
	};
}
