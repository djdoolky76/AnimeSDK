#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HHJHEDFNHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC2370)
#define HHJHEDFNHAK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CC2090)
#define HHJHEDFNHAK_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x15CC2330)
#define HHJHEDFNHAK_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x15CC2350)
#define HHJHEDFNHAK_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0x15CC20E0)
#define HHJHEDFNHAK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CC2030)
#define HHJHEDFNHAK_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x15CC2280)
#define HHJHEDFNHAK_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x15CC2340)
#define HHJHEDFNHAK_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x15CC2360)

inline static constexpr unsigned int HHJHEDFNHAK_TypeDefinitionIndex = 68915;

	class HHJHEDFNHAK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Parent_k__BackingField; // 0x10
		::System::String* _AssetPath_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* INIJCJJLPKM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_INIJCJJLPKM_OFFSET))(this);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_GET_ASSETPATH_OFFSET))(this);
		}

		::System::Void set_AssetPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_SET_ASSETPATH_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Parent()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HHJHEDFNHAK_SET_PARENT_OFFSET))(this, a1);
		}

	};
