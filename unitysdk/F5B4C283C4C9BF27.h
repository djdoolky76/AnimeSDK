#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture3D; }

#define F5B4C283C4C9BF27_A0A7C521830587A4_OFFSET UNITYSDK_OFFSET(0x28E6340)
#define F5B4C283C4C9BF27_EDD58DADAE0F9A6E_OFFSET UNITYSDK_OFFSET(0x28E6400)
#define F5B4C283C4C9BF27_FE0FA39943C764C2_OFFSET UNITYSDK_OFFSET(0x28E6050)

inline static constexpr unsigned int F5B4C283C4C9BF27_TypeDefinitionIndex = 16403;

class F5B4C283C4C9BF27 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_E5C977142460E1B4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F5B4C283C4C9BF27_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_B8538207E86D9ECC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F5B4C283C4C9BF27_TypeDefinitionIndex)->GetStaticField(0x1);
	}
	static ::UnityEngine::Texture3D** StaticGet_EB85F220B2C97559()
	{
		return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(F5B4C283C4C9BF27_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void FE0FA39943C764C2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F5B4C283C4C9BF27_FE0FA39943C764C2_OFFSET))();
	}

	static ::System::String* A0A7C521830587A4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F5B4C283C4C9BF27_A0A7C521830587A4_OFFSET))();
	}

	static ::System::Boolean EDD58DADAE0F9A6E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + F5B4C283C4C9BF27_EDD58DADAE0F9A6E_OFFSET))();
	}
};
