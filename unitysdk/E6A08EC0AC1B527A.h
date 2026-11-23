#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/E6A08EC0AC1B527A_A3CA9BD94E364034.h"

class E6A08EC0AC1B527A_E3AB53EF614F9284;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }

#define E6A08EC0AC1B527A_AC7DC66F4D80FC34_OFFSET UNITYSDK_OFFSET(0x43CAD70)
#define E6A08EC0AC1B527A_EB07C11774DC3F15_OFFSET UNITYSDK_OFFSET(0x43CAAF0)
#define E6A08EC0AC1B527A_F2DCA21C791C9243_OFFSET UNITYSDK_OFFSET(0x43CA810)
#define E6A08EC0AC1B527A__CCTOR_OFFSET UNITYSDK_OFFSET(0x43CAC60)

inline static constexpr unsigned int E6A08EC0AC1B527A_TypeDefinitionIndex = 18654;

class E6A08EC0AC1B527A : public ::System::Object
{
public:
	static ::E6A08EC0AC1B527A_E3AB53EF614F9284** StaticGet_AB3CE2144851FA44()
	{
		return (::E6A08EC0AC1B527A_E3AB53EF614F9284**)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Vector2* StaticGet_F61858537F882939()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::UnityEngine::Vector2* StaticGet_BF4C15F8CC221177()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::UnityEngine::Vector2* StaticGet_A958F070EEF0082B()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_A968F6D3D089A079()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_EBF2D699190D20FD()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x30);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_BFF76BFB7D9E13FF()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_TypeDefinitionIndex)->GetStaticField(0x40);
	}

	static ::UnityEngine::GameObject* EB07C11774DC3F15(::System::String* F79B4D487F303AB2, ::UnityEngine::Vector2 F54AF627638DE3C9, ::Il2CppArray<::System::Type*>* FF63FAF59D531C28)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A_EB07C11774DC3F15_OFFSET))(F79B4D487F303AB2, F54AF627638DE3C9, FF63FAF59D531C28);
	}

	static ::UnityEngine::GameObject* F2DCA21C791C9243(::E6A08EC0AC1B527A_A3CA9BD94E364034 AD4715B288B7260E)
	{
		return ((::UnityEngine::GameObject*(*)(::E6A08EC0AC1B527A_A3CA9BD94E364034))((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A_F2DCA21C791C9243_OFFSET))(AD4715B288B7260E);
	}

	static ::E6A08EC0AC1B527A_E3AB53EF614F9284* AC7DC66F4D80FC34()
	{
		return ((::E6A08EC0AC1B527A_E3AB53EF614F9284*(*)())((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A_AC7DC66F4D80FC34_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A__CCTOR_OFFSET))();
	}
};
