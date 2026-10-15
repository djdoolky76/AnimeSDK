#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/RuntimeElement.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"

#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F38BEC0)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F37FE90)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0x1F38BE70)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALEND_OFFSET UNITYSDK_OFFSET(0x1F38BDC0)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALSTART_OFFSET UNITYSDK_OFFSET(0x1F38BDB0)
#define UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1F38BE00)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int InfiniteRuntimeClip_TypeDefinitionIndex = 38817;

	class InfiniteRuntimeClip : public ::UnityEngine::Timeline::RuntimeElement
	{
	public:
		::UnityEngine::Playables::Playable m_Playable; // 0x18
		static ::System::Int64* StaticGet_kIntervalEnd()
		{
			return (::System::Int64*)UnitySDK::FromName("UnityEngine.Timeline", "InfiniteRuntimeClip")->GetStaticField(0x11870);
		}

		::System::Void _ctor(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_CCTOR_OFFSET))();
		}

		::System::Int64 get_intervalStart()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALSTART_OFFSET))(this);
		}

		::System::Int64 get_intervalEnd()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_GET_INTERVALEND_OFFSET))(this);
		}

		::System::Void set_enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_SET_ENABLE_OFFSET))(this, a1);
		}

		::System::Void EvaluateAt(::System::Double a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_INFINITERUNTIMECLIP_EVALUATEAT_OFFSET))(this, a1, a2);
		}

	};
}
