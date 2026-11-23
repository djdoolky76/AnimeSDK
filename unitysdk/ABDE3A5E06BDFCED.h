#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2B5EB9E4D010A64.h"

namespace TA::SceneLightComponent::VLB { class VolumetricLightBeamSD; }

#define ABDE3A5E06BDFCED_F0715F86377A7DD9_OFFSET UNITYSDK_OFFSET(0x28C1B60)
#define ABDE3A5E06BDFCED_F3E9BFF09C08956D_OFFSET UNITYSDK_OFFSET(0x28C1C40)
#define ABDE3A5E06BDFCED_F4E32B069AA12DF9_OFFSET UNITYSDK_OFFSET(0x28C1D20)
#define ABDE3A5E06BDFCED_FE2AF5C35A75BD19_OFFSET UNITYSDK_OFFSET(0x28C1CB0)
#define ABDE3A5E06BDFCED_FE54CCFB7A90ADB1_OFFSET UNITYSDK_OFFSET(0x28C1BD0)
#define ABDE3A5E06BDFCED__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int ABDE3A5E06BDFCED_TypeDefinitionIndex = 16276;

class ABDE3A5E06BDFCED : public ::E2B5EB9E4D010A64
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDE3A5E06BDFCED__CTOR_OFFSET))(this);
	}

	::System::Void F3E9BFF09C08956D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDE3A5E06BDFCED_F3E9BFF09C08956D_OFFSET))(this);
	}

	::System::Void F0715F86377A7DD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDE3A5E06BDFCED_F0715F86377A7DD9_OFFSET))(this);
	}

	::System::Void FE2AF5C35A75BD19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDE3A5E06BDFCED_FE2AF5C35A75BD19_OFFSET))(this);
	}

	::TA::SceneLightComponent::VLB::VolumetricLightBeamSD* F4E32B069AA12DF9()
	{
		return ((::TA::SceneLightComponent::VLB::VolumetricLightBeamSD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDE3A5E06BDFCED_F4E32B069AA12DF9_OFFSET))(this);
	}

	::System::Void FE54CCFB7A90ADB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDE3A5E06BDFCED_FE54CCFB7A90ADB1_OFFSET))(this);
	}
};
