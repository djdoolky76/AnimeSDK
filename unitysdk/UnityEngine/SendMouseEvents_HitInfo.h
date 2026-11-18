#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_SENDMOUSEEVENTS_HITINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1FFF4970)
#define UNITYENGINE_SENDMOUSEEVENTS_HITINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FFF4730)
#define UNITYENGINE_SENDMOUSEEVENTS_HITINFO_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B5D80)

namespace UnityEngine
{
	inline static constexpr unsigned int SendMouseEvents_HitInfo_TypeDefinitionIndex = 7708;

	struct alignas(8) SendMouseEvents_HitInfo
	{
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::Camera* camera; // 0x18

		::System::Void SendMessage(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_HITINFO_SENDMESSAGE_OFFSET))(this, name);
		}

		/*
		static ::System::Boolean op_Implicit(::UnityEngine::SendMouseEvents_HitInfo exists)
		{
			return ((::System::Boolean(*)(::UnityEngine::SendMouseEvents_HitInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_HITINFO_OP_IMPLICIT_OFFSET))(exists);
		}
		*/

		/*
		static ::System::Boolean Compare(::UnityEngine::SendMouseEvents_HitInfo lhs, ::UnityEngine::SendMouseEvents_HitInfo rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::SendMouseEvents_HitInfo, ::UnityEngine::SendMouseEvents_HitInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_SENDMOUSEEVENTS_HITINFO_COMPARE_OFFSET))(lhs, rhs);
		}
		*/
	};
}
