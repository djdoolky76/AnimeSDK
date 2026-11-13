#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StringID.h"
namespace System { class Object; }

#define UNITYENGINE_SYNCMARKER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F91A20)
#define UNITYENGINE_SYNCMARKER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EE9440)
#define UNITYENGINE_SYNCMARKER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7CED80)

namespace UnityEngine
{
	inline static constexpr unsigned int SyncMarker_TypeDefinitionIndex = 5738;

	struct alignas(4) SyncMarker
	{
		::UnityEngine::StringID markerName; // 0x10
		/*
		::System::Boolean Equals(::UnityEngine::SyncMarker a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::SyncMarker))((::PBYTE)hIl2Cpp + UNITYENGINE_SYNCMARKER_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SYNCMARKER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYNCMARKER_GETHASHCODE_OFFSET))(this);
		}

	};
}
