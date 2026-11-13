#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class GameObject; }

#define GOICJLNIBPA_CTOR_OFFSET UNITYSDK_OFFSET(0x187B87C0)
#define GOICJLNIBPA_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x187B89C0)
#define GOICJLNIBPA_GETRECT_OFFSET UNITYSDK_OFFSET(0x187B8A30)

inline static constexpr unsigned int GOICJLNIBPA_TypeDefinitionIndex = 48533;

	class GOICJLNIBPA : public ::System::Object
	{
	public:
		::UnityEngine::Bounds AFFLPJCLPMG; // 0x10
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GOICJLNIBPA_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GOICJLNIBPA_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + GOICJLNIBPA_GETRECT_OFFSET))(this);
		}

	};
