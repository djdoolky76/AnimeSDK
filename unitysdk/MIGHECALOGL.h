#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MIGHECALOGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB957240)
#define MIGHECALOGL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB956890)
#define MIGHECALOGL_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xB956A80)
#define MIGHECALOGL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9567F0)
#define MIGHECALOGL_LGBHGOKNJNF_OFFSET UNITYSDK_OFFSET(0xB956B20)
#define MIGHECALOGL_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0xB957190)

inline static constexpr unsigned int MIGHECALOGL_TypeDefinitionIndex = 60946;

	class MIGHECALOGL : public ::System::Object
	{
	public:
		::UnityEngine::Transform* IDPCOKGLMMB; // 0x10
		::UnityEngine::Object* NCPNKDBIINJ; // 0x18
		::System::String* LBMJJOOCCBD; // 0x20
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* HAHBLPNJOKL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHECALOGL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIGHECALOGL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHECALOGL_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::GameObject* INIJCJJLPKM(::System::Single a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIGHECALOGL_INIJCJJLPKM_OFFSET))(this, a1);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIGHECALOGL_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::Void LGBHGOKNJNF(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MIGHECALOGL_LGBHGOKNJNF_OFFSET))(this, a1, a2);
		}

	};
