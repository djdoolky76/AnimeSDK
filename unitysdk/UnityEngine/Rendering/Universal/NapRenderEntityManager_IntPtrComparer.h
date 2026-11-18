#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D712F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D712FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D712FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D712F30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager_IntPtrComparer_TypeDefinitionIndex = 26513;

	class NapRenderEntityManager_IntPtrComparer : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::NapRenderEntityManager_IntPtrComparer** StaticGet_Instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderEntityManager_IntPtrComparer**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager_IntPtrComparer_TypeDefinitionIndex)->GetStaticField(0x22D80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::IntPtr x, ::System::IntPtr y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::IntPtr obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER_INTPTRCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
