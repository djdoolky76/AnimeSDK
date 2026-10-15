#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_VCAMTARGETPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x166B59B0)

namespace Cinemachine
{
	class VcamTargetPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_VCAMTARGETPROPERTYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
