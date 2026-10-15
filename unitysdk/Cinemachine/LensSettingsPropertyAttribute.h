#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_LENSSETTINGSPROPERTYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x166AC1F0)

namespace Cinemachine
{
	class LensSettingsPropertyAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_LENSSETTINGSPROPERTYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
