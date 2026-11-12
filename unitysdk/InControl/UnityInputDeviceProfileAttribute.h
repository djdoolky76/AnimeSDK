#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_UNITYINPUTDEVICEPROFILEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDC850)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceProfileAttribute_TypeDefinitionIndex = 41875;

	class UnityInputDeviceProfileAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEPROFILEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
