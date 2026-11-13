#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_NATIVEINPUTDEVICEPROFILEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x15628BD0)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceProfileAttribute_TypeDefinitionIndex = 41844;

	class NativeInputDeviceProfileAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
