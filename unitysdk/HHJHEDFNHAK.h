#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HHJHEDFNHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCEDE0)
#define HHJHEDFNHAK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CCEB00)
#define HHJHEDFNHAK_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x15CCEDA0)
#define HHJHEDFNHAK_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x15CCEDC0)
#define HHJHEDFNHAK_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0x15CCEB50)
#define HHJHEDFNHAK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CCEAA0)
#define HHJHEDFNHAK_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x15CCECF0)
#define HHJHEDFNHAK_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x15CCEDB0)
#define HHJHEDFNHAK_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x15CCEDD0)

	class HHJHEDFNHAK : public ::System::Object
	{
	public:
		::System::String* _AssetPath_k__BackingField; // 0x10
		::UnityEngine::Transform* _Parent_k__BackingField; // 0x18
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
