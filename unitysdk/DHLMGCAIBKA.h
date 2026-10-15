#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DHLMGCAIBKA_CGEJAOFGFPA_OFFSET UNITYSDK_OFFSET(0xEBE94F0)
#define DHLMGCAIBKA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE9A70)
#define DHLMGCAIBKA_FBICJOMJFKG_OFFSET UNITYSDK_OFFSET(0xEBE9350)
#define DHLMGCAIBKA_JPPOAFLAMFG_OFFSET UNITYSDK_OFFSET(0xEBE95C0)
#define DHLMGCAIBKA_KMHLIJDJHOJ_OFFSET UNITYSDK_OFFSET(0xEBE8A90)
#define DHLMGCAIBKA_NMHMIKIICEA_OFFSET UNITYSDK_OFFSET(0xEBE9420)

inline static constexpr unsigned int DHLMGCAIBKA_TypeDefinitionIndex = 57187;

	class DHLMGCAIBKA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLMGCAIBKA_CTOR_OFFSET))(this);
		}

		static ::System::Void KMHLIJDJHOJ(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DHLMGCAIBKA_KMHLIJDJHOJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void JPPOAFLAMFG(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DHLMGCAIBKA_JPPOAFLAMFG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FBICJOMJFKG(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHLMGCAIBKA_FBICJOMJFKG_OFFSET))(a1, a2);
		}

		static ::System::Void NMHMIKIICEA(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHLMGCAIBKA_NMHMIKIICEA_OFFSET))(a1, a2);
		}

		static ::System::Void CGEJAOFGFPA(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHLMGCAIBKA_CGEJAOFGFPA_OFFSET))(a1, a2);
		}

	};
