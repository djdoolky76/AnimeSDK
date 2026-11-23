#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_MATERIALPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x403A670)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialParameter_TypeDefinitionIndex = 20357;

	class MaterialParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Material* E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
