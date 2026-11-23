#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS_GET_SAMPLINGRESOLUTION_OFFSET UNITYSDK_OFFSET(0x2327230)
#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x387F200)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceSplineSettings_TypeDefinitionIndex = 18105;

	class HEU_InputInterfaceSplineSettings : public ::System::Object
	{
	public:
		::System::Single _samplingResolution; // 0x10

		::System::Single get_SamplingResolution()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS_GET_SAMPLINGRESOLUTION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACESPLINESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
