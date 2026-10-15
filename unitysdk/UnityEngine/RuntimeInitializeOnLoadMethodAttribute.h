#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"
#include "unitysdk/UnityEngine/RuntimeInitializeLoadType.h"

#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F42A630)
#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F42A600)
#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_SET_LOADTYPE_OFFSET UNITYSDK_OFFSET(0x1F42A620)

namespace UnityEngine
{
	class RuntimeInitializeOnLoadMethodAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::UnityEngine::RuntimeInitializeLoadType m_LoadType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::RuntimeInitializeLoadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeInitializeLoadType))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void set_loadType(::UnityEngine::RuntimeInitializeLoadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeInitializeLoadType))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_SET_LOADTYPE_OFFSET))(this, a1);
		}

	};
}
