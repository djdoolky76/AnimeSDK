#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/FrameShapeElement_TYPE.h"
#include "unitysdk/miHoYoEmotion/ShapeElement.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define MIHOYOEMOTION_FRAMESHAPEELEMENT_GET_BLINKDURATION_OFFSET UNITYSDK_OFFSET(0x1D59E9E0)
#define MIHOYOEMOTION_FRAMESHAPEELEMENT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D59E900)
#define MIHOYOEMOTION_FRAMESHAPEELEMENT_GET_POSTDURATION_OFFSET UNITYSDK_OFFSET(0x1D59E970)
#define MIHOYOEMOTION_FRAMESHAPEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59EA50)
#define MIHOYOEMOTION_FRAMESHAPEELEMENT___BASE_GET_BLINKDURATION_OFFSET UNITYSDK_OFFSET(0x1D59EAA0)
#define MIHOYOEMOTION_FRAMESHAPEELEMENT___BASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D59EAC0)
#define MIHOYOEMOTION_FRAMESHAPEELEMENT___BASE_GET_POSTDURATION_OFFSET UNITYSDK_OFFSET(0x1D59EAD0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeElement_TypeDefinitionIndex = 38030;

	class FrameShapeElement : public ::miHoYoEmotion::ShapeElement
	{
	public:
		::miHoYoEmotion::FrameShapeElement_TYPE type; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* propertyName; // 0x20
		::System::Single frameRate; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::Texture2D*>* mainFrames; // 0x30
		::Il2CppArray<::UnityEngine::Texture2D*>* postFrames; // 0x38
		::Il2CppArray<::UnityEngine::Texture2D*>* blinkFrames; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_postDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT_GET_POSTDURATION_OFFSET))(this);
		}

		::System::Single get_blinkDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT_GET_BLINKDURATION_OFFSET))(this);
		}

		::System::Single __base_get_blinkDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT___BASE_GET_BLINKDURATION_OFFSET))(this);
		}

		::System::Single __base_get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT___BASE_GET_DURATION_OFFSET))(this);
		}

		::System::Single __base_get_postDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEELEMENT___BASE_GET_POSTDURATION_OFFSET))(this);
		}
	};
}
