#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FrameTiming.h"
namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2F880)
#define RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC2F3C0)

namespace RPG::CustomRP
{
	class DynamicResolutionHeuristicProxy : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _FrameList; // 0x10
		::Il2CppArray<::UnityEngine::FrameTiming>* _TmpFrameTimings; // 0x18
		::System::Single _CurFrameRenderScale; // 0x20
		::System::Int32 _FrameCount; // 0x24
		::System::Int32 _TailIndex; // 0x28
		static ::System::Single* StaticGet_LastCPUTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "DynamicResolutionHeuristicProxy")->GetStaticField(0xA580);
		}

		static ::System::Single* StaticGet_LastGPUTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "DynamicResolutionHeuristicProxy")->GetStaticField(0xA584);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY_CTOR_OFFSET))(this);
		}

		::System::Void Update(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DYNAMICRESOLUTIONHEURISTICPROXY_UPDATE_OFFSET))(this, a1);
		}

	};
}
