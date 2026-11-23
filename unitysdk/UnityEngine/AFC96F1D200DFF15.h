#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class AFC96F1D200DFF15_FDEA0209D95DFAB3; }

#define UNITYENGINE_AFC96F1D200DFF15_B5EFDEAF90CBB3D6_OFFSET UNITYSDK_OFFSET(0x4105B40)
#define UNITYENGINE_AFC96F1D200DFF15_E022DEFF91D65C88_OFFSET UNITYSDK_OFFSET(0x4105AF0)
#define UNITYENGINE_AFC96F1D200DFF15_F51E9DD09DB4B355_OFFSET UNITYSDK_OFFSET(0x4105A90)

namespace UnityEngine
{
	inline static constexpr unsigned int AFC96F1D200DFF15_TypeDefinitionIndex = 21424;

	class AFC96F1D200DFF15 : public ::System::Object
	{
	public:
		static ::UnityEngine::AFC96F1D200DFF15_FDEA0209D95DFAB3** StaticGet_F9C7A1AE23CA2567()
		{
			return (::UnityEngine::AFC96F1D200DFF15_FDEA0209D95DFAB3**)Il2CppClass::FromTypeDefinitionIndex(AFC96F1D200DFF15_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_A586D8B94CEA2CD7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AFC96F1D200DFF15_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_FAE95B8563CD5123()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AFC96F1D200DFF15_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void B5EFDEAF90CBB3D6()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AFC96F1D200DFF15_B5EFDEAF90CBB3D6_OFFSET))();
		}

		static ::System::Void E022DEFF91D65C88()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AFC96F1D200DFF15_E022DEFF91D65C88_OFFSET))();
		}

		static ::System::Void F51E9DD09DB4B355(::System::Boolean FC9116BC4A52D676)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AFC96F1D200DFF15_F51E9DD09DB4B355_OFFSET))(FC9116BC4A52D676);
		}
	};
}
