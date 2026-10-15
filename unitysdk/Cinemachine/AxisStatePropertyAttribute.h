#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_AXISSTATEPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1665FA70)

namespace Cinemachine
{
	class AxisStatePropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATEPROPERTYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
