#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F242360)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2423A0)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C___CTOR_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F2423B0)

namespace FluffyUnderware::Curvy::Components
{
	inline static constexpr unsigned int CurvyGLRenderer___c_TypeDefinitionIndex = 37684;

	class CurvyGLRenderer___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::UnityEngine::Material*>** StaticGet___9__10_0()
		{
			return (::System::Func_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGLRenderer___c_TypeDefinitionIndex)->GetStaticField(0x2C240);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CurvyGLRenderer___c_TypeDefinitionIndex)->GetStaticField(0x2C248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* __ctor_b__10_0()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C___CTOR_B__10_0_OFFSET))(this);
		}
	};
}
