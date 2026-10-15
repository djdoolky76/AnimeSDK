#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Material; }

#define UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19A6D0)
#define UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F19A460)

namespace UnityEngine::ProBuilder
{
	class EntityBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean manageVisibility; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_SETMATERIAL_OFFSET))(this, a1);
		}

	};
}
