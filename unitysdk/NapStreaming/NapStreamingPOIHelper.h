#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/POIGroup.h"
#include "unitysdk/NapStreaming/POIGroupMask.h"
#include "unitysdk/NapStreaming/POIMODE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define NAPSTREAMING_NAPSTREAMINGPOIHELPER_CONTAINSBOUNDS_OFFSET UNITYSDK_OFFSET(0xB2F7C50)
#define NAPSTREAMING_NAPSTREAMINGPOIHELPER_ISBOUNDSCONTAINED_OFFSET UNITYSDK_OFFSET(0xB2F7A90)
#define NAPSTREAMING_NAPSTREAMINGPOIHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB2F7880)
#define NAPSTREAMING_NAPSTREAMINGPOIHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F8490)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingPOIHelper_TypeDefinitionIndex = 64946;

	class NapStreamingPOIHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::NapStreaming::POIMODE mode; // 0x18
		::NapStreaming::POIGroup group; // 0x1C
		::NapStreaming::POIGroupMask cullingMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPOIHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPOIHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Boolean IsBoundsContained(::UnityEngine::Bounds outer, ::UnityEngine::Bounds inner)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPOIHELPER_ISBOUNDSCONTAINED_OFFSET))(this, outer, inner);
		}

		::System::Boolean ContainsBounds(::UnityEngine::Bounds b, ::System::Boolean checkCenter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGPOIHELPER_CONTAINSBOUNDS_OFFSET))(this, b, checkCenter);
		}
	};
}
