#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
namespace System { class Action; }
namespace UnityEngine { class SDFSectorData; }
namespace UnityEngine { class SDFStreamingParams; }

#define UNITYENGINE_SDFSYSTEM_ADDSECTORDATA_OFFSET UNITYSDK_OFFSET(0x1F42A7F0)
#define UNITYENGINE_SDFSYSTEM_ADD_STREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F42A6D0)
#define UNITYENGINE_SDFSYSTEM_NOTIFYSTREAMING_OFFSET UNITYSDK_OFFSET(0x1F42A7D0)
#define UNITYENGINE_SDFSYSTEM_REMOVE_STREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F42A750)
#define UNITYENGINE_SDFSYSTEM_UNLOADSECTORDATA_OFFSET UNITYSDK_OFFSET(0x1F42A800)

namespace UnityEngine
{
	inline static constexpr unsigned int SDFSystem_TypeDefinitionIndex = 4265;

	class SDFSystem : public ::UnityEngine::Behaviour
	{
	public:
		::System::Action* streamingCallback; // 0x18
		::System::Void add_streamingCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_ADD_STREAMINGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_streamingCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_REMOVE_STREAMINGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void NotifyStreaming(::UnityEngine::SDFStreamingParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFStreamingParams*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_NOTIFYSTREAMING_OFFSET))(this, a1);
		}

		::System::Void AddSectorData(::UnityEngine::SDFSectorData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_ADDSECTORDATA_OFFSET))(this, a1);
		}

		::System::Void UnloadSectorData(::UnityEngine::SDFSectorData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_UNLOADSECTORDATA_OFFSET))(this, a1);
		}

	};
}
