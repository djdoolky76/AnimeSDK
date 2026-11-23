#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EB11C3F66C5423B1.h"
#include "unitysdk/UnityEngine/F146A8DCFD349694.h"
#include "unitysdk/UnityEngine/FEE0853DB4663504.h"

namespace System { class String; }
namespace UnityEngine { class B598BD10BB43E7FA; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x2327240)
#define UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x40FF040)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEvent_TypeDefinitionIndex = 21094;

	class AnimationEvent : public ::System::Object
	{
	public:
		::System::Single m_Time; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* m_FunctionName; // 0x18
		::System::String* m_StringParameter; // 0x20
		::UnityEngine::Object* m_ObjectReferenceParameter; // 0x28
		::System::Single m_FloatParameter; // 0x30
		::System::Int32 m_IntParameter; // 0x34
		::System::Int32 m_MessageOptions; // 0x38
		::UnityEngine::FEE0853DB4663504 m_Source; // 0x3C
		::UnityEngine::B598BD10BB43E7FA* m_StateSender; // 0x40
		::UnityEngine::F146A8DCFD349694 m_AnimatorStateInfo; // 0x48
		::UnityEngine::EB11C3F66C5423B1 m_AnimatorClipInfo; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void set_functionName(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_FUNCTIONNAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_time(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_SET_TIME_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
