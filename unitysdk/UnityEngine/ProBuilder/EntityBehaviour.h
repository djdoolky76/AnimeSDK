#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Material; }

#define UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x2044BB10)
#define UNITYENGINE_PROBUILDER_ENTITYBEHAVIOUR_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x2044B8A0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EntityBehaviour_TypeDefinitionIndex = 45432;

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
