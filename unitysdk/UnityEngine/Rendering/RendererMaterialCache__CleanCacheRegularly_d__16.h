#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class RendererMaterialCache; }

#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8E31F0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E8E32A0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E8E3300)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E8E32B0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E8E31E0)
#define UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E31D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RendererMaterialCache__CleanCacheRegularly_d__16_TypeDefinitionIndex = 27333;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	class RendererMaterialCache__CleanCacheRegularly_d__16 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::Rendering::RendererMaterialCache* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERERMATERIALCACHE__CLEANCACHEREGULARLY_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
