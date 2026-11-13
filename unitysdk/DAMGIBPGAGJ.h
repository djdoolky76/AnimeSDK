#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJMFJKDEHJ.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DAMGIBPGAGJ_APPLY_OFFSET UNITYSDK_OFFSET(0x199473E0)
#define DAMGIBPGAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19947230)
#define DAMGIBPGAGJ_INIT_OFFSET UNITYSDK_OFFSET(0x19947470)
#define DAMGIBPGAGJ_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x199474C0)
#define DAMGIBPGAGJ_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x199472E0)
#define DAMGIBPGAGJ_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x19947330)
#define DAMGIBPGAGJ_ONFADING_OFFSET UNITYSDK_OFFSET(0x19947280)
#define DAMGIBPGAGJ_RELEASE_OFFSET UNITYSDK_OFFSET(0x19947430)
#define DAMGIBPGAGJ_TICK_OFFSET UNITYSDK_OFFSET(0x19947380)

inline static constexpr unsigned int DAMGIBPGAGJ_TypeDefinitionIndex = 50384;

	class DAMGIBPGAGJ : public ::IEJMFJKDEHJ
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_TICK_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_APPLY_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_RELEASE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_INIT_OFFSET))(this, a1);
		}

		::System::Void OnEnvObjEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAMGIBPGAGJ_ONENVOBJENABLE_OFFSET))(this, a1);
		}

	};
