#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class EmoTrack_EmoVoidHandler; }
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }

#define MIHOYOEMOTION_EMOTRACK_APPENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1D594EC0)
#define MIHOYOEMOTION_EMOTRACK_APPLY_OFFSET UNITYSDK_OFFSET(0x1D57B0A0)
#define MIHOYOEMOTION_EMOTRACK_CALLFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1D586240)
#define MIHOYOEMOTION_EMOTRACK_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x1D5801A0)
#define MIHOYOEMOTION_EMOTRACK_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x1D57FE70)
#define MIHOYOEMOTION_EMOTRACK_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1D586C70)
#define MIHOYOEMOTION_EMOTRACK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D586D80)
#define MIHOYOEMOTION_EMOTRACK_GETCURSHAPE_OFFSET UNITYSDK_OFFSET(0x1D578100)
#define MIHOYOEMOTION_EMOTRACK_INIT_OFFSET UNITYSDK_OFFSET(0x1D57A530)
#define MIHOYOEMOTION_EMOTRACK_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1D594F20)
#define MIHOYOEMOTION_EMOTRACK_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D586F10)
#define MIHOYOEMOTION_EMOTRACK_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D586FF0)
#define MIHOYOEMOTION_EMOTRACK_PLAYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D57BBC0)
#define MIHOYOEMOTION_EMOTRACK_REGISTERFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1D594D00)
#define MIHOYOEMOTION_EMOTRACK_SETCURSHAPE_OFFSET UNITYSDK_OFFSET(0x1D594E60)
#define MIHOYOEMOTION_EMOTRACK_STOPSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D585800)
#define MIHOYOEMOTION_EMOTRACK_UNREGISTERFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1D594DB0)
#define MIHOYOEMOTION_EMOTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D57B220)
#define MIHOYOEMOTION_EMOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D57AF80)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoTrack_TypeDefinitionIndex = 38015;

	class EmoTrack : public ::System::Object
	{
	public:
		// static const ::System::String* POSE_IDLE; // 0x0
		// static const ::System::Single DEFAULT_POST_TIME; // 0x0
		// static const ::System::Single DEFAULT_BLEND_TIME; // 0x0
		// static const ::System::Single STOP_BLEND_TIME; // 0x0
		// static const ::System::Single INTERRUPT_BLEND_TIME; // 0x0
		// static const ::System::Int32 TRACK_EMOTION = 0x0; // 0x0
		// static const ::System::Int32 TRACK_BLINK = 0x1; // 0x0
		// static const ::System::Int32 TRACK_PHONEME = 0x2; // 0x0
		// static const ::System::Int32 TRACK_EYE_CTRL = 0x3; // 0x0
		::miHoYoEmotion::BaseShape* _curShape; // 0x10
		::miHoYoEmotion::ElementManager* _manager; // 0x18
		::System::String* currFacial; // 0x20
		::System::String* _curTag; // 0x28
		::miHoYoEmotion::BaseShape* _preShape; // 0x30
		::System::String* currPose; // 0x38
		::miHoYoEmotion::EmoTrack_EmoVoidHandler* _finishHandler; // 0x40
		::System::Single _timeLength; // 0x48
		::System::Single stopTime; // 0x4C
		::System::Single _timeCnt; // 0x50
		::System::Boolean isPaused; // 0x54
		::System::Boolean isInterrupted; // 0x55
		::System::Boolean _isTobeFinished; // 0x56
		::System::Boolean isStopped; // 0x57

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_INIT_OFFSET))(this, manager);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_ISPLAYING_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_APPLY_OFFSET))(this);
		}

		::System::Void Evaluate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_EVALUATE_OFFSET))(this, time);
		}

		::System::Void RegisterFinishHandler(::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_REGISTERFINISHHANDLER_OFFSET))(this, handler);
		}

		::System::Void UnregisterFinishHandler(::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_UNREGISTERFINISHHANDLER_OFFSET))(this, handler);
		}

		::System::Void CallFinishHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_CALLFINISHHANDLER_OFFSET))(this);
		}

		::miHoYoEmotion::BaseShape* GetCurShape()
		{
			return ((::miHoYoEmotion::BaseShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_GETCURSHAPE_OFFSET))(this);
		}

		::System::Void SetCurShape(::miHoYoEmotion::BaseShape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_SETCURSHAPE_OFFSET))(this, shape);
		}

		::System::Void EnableShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_ENABLESHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void PlayDefault(::miHoYoEmotion::BaseShape* shape, ::System::String* postToPlay)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_PLAYDEFAULT_OFFSET))(this, shape, postToPlay);
		}

		::System::Void AppendShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_APPENDSHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void ClearShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_CLEARSHAPE_OFFSET))(this);
		}

		::System::Void ClearShapeOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_CLEARSHAPEONLY_OFFSET))(this);
		}

		::System::Void PlayBakedSequence(::miHoYoEmotion::SequenceBakeData_BakeData* bakeData, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>* stopShapeDatas)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_PLAYBAKEDSEQUENCE_OFFSET))(this, bakeData, stopShapeDatas);
		}

		::System::Void StopSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_STOPSEQUENCE_OFFSET))(this);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_INTERRUPT_OFFSET))(this);
		}
	};
}
