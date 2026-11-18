#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class CullingGroup; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_ALLOC_OFFSET UNITYSDK_OFFSET(0x1CF7E5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CF7E6F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x1CF7E660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CF7E440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7E530)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CullingGroupManager_TypeDefinitionIndex = 27199;

	class CullingGroupManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::CullingGroupManager** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::CullingGroupManager**)Il2CppClass::FromTypeDefinitionIndex(CullingGroupManager_TypeDefinitionIndex)->GetStaticField(0x241A0);
		}
		::System::Collections::Generic::Stack_1<::UnityEngine::CullingGroup*>* m_FreeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::Internal::CullingGroupManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::CullingGroupManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_GET_INSTANCE_OFFSET))();
		}

		::UnityEngine::CullingGroup* Alloc()
		{
			return ((::UnityEngine::CullingGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_ALLOC_OFFSET))(this);
		}

		::System::Void Free(::UnityEngine::CullingGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CullingGroup*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_FREE_OFFSET))(this, group);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_CULLINGGROUPMANAGER_CLEANUP_OFFSET))(this);
		}
	};
}
