#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define PATHCREATION_UTILITY_MATHUTILITY_POSROTSCALE_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F238490)
#define PATHCREATION_UTILITY_MATHUTILITY_POSROTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2383D0)

namespace PathCreation::Utility
{
	inline static constexpr unsigned int MathUtility_PosRotScale_TypeDefinitionIndex = 36118;

	class MathUtility_PosRotScale : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_POSROTSCALE__CTOR_OFFSET))(this, t);
		}

		::System::Void SetTransform(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_POSROTSCALE_SETTRANSFORM_OFFSET))(this, t);
		}
	};
}
