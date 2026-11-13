#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_CINEMACHINEIMPULSECHANNELPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x19C597B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseChannelPropertyAttribute_TypeDefinitionIndex = 40800;

	class CinemachineImpulseChannelPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSECHANNELPROPERTYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
