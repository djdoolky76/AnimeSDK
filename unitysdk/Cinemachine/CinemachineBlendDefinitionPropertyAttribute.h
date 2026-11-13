#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEBLENDDEFINITIONPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x19C33700)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendDefinitionPropertyAttribute_TypeDefinitionIndex = 40755;

	class CinemachineBlendDefinitionPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITIONPROPERTYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
