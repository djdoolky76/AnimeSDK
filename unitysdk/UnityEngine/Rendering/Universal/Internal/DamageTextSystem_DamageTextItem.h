#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA47E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1CA47E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA47E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA47F40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageTextItem_TypeDefinitionIndex = 27115;

	class DamageTextSystem_DamageTextItem : public ::System::Object
	{
	public:
		::UnityEngine::Transform* refTransform; // 0x10
		::System::String* text; // 0x18
		::System::Action_2<::System::UInt32, ::System::Single>* onEnd; // 0x20
		::System::Int32 refTransformFollowType; // 0x28
		::UnityEngine::Vector4 color; // 0x2C
		::System::UInt32 entityId; // 0x3C
		::System::Single _textLength; // 0x40
		::UnityEngine::Vector3 curWorldPos; // 0x44
		::System::Single fadeoutInterval; // 0x50
		::UnityEngine::Matrix4x4 posXOffsets; // 0x54
		::System::UInt32 isCombineDamageText; // 0x94
		::System::Single combineTextFadeOutStartTime; // 0x98
		::System::Single combineTextAddScale; // 0x9C
		::System::UInt32 damageTextFaceType; // 0xA0
		::System::Boolean isOnTop; // 0xA4
		::System::Boolean isRandomChange; // 0xA5
		::System::Boolean isCombineDamageTextDestroyed; // 0xA6
		::System::Boolean isInPool; // 0xA7
		::System::Single fadeinTime; // 0xA8
		::System::Single randomChangeTime; // 0xAC
		::System::Int32 bitCount; // 0xB0
		::System::UInt32 animType; // 0xB4
		::UnityEngine::Matrix4x4 trs; // 0xB8
		::UnityEngine::Matrix4x4 uvOffsets; // 0xF8
		::UnityEngine::Vector2 posScreenOffset; // 0x138
		::System::Single fadeoutTime; // 0x140
		::System::Int32 blockIndex; // 0x144
		::System::Single faceIndex; // 0x148
		::System::Single showTime; // 0x14C
		::UnityEngine::Vector3 posWorldOffset; // 0x150
		::System::Single combineTextRootScale; // 0x15C
		::System::Single charWidthOffset; // 0x160
		::System::Single fadeinInterval; // 0x164
		::System::UInt32 damageTextShowType; // 0x168
		::System::Single flash; // 0x16C
		::System::Single scale; // 0x170
		::System::Single startTime; // 0x174
		::UnityEngine::Vector3 refTransformInitPos; // 0x178
		::System::Single endTime; // 0x184
		::System::Int32 blockOffset; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_textLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET))(this);
		}

		::System::Void set_textLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET))(this);
		}
	};
}
