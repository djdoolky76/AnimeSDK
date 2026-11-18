#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D28BCE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28BD20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__ONREALENABLE_B__38_0_OFFSET UNITYSDK_OFFSET(0x1D28BD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__UPDATE_B__42_0_OFFSET UNITYSDK_OFFSET(0x1D28BD50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineObjectRenderer___c_TypeDefinitionIndex = 26914;

	class OutlineObjectRenderer___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__42_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x23CF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x23CF8);
		}
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__38_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x23D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnRealEnable_b__38_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__ONREALENABLE_B__38_0_OFFSET))(this, r);
		}

		::System::Boolean _Update_b__42_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__UPDATE_B__42_0_OFFSET))(this, r);
		}
	};
}
