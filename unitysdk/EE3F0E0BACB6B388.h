#pragma once
#include "unitysdk/unitysdk.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem::Control { class MonoESControlCharacterLightingComponent; }

#define EE3F0E0BACB6B388_F1314E3A9182F2F2_OFFSET UNITYSDK_OFFSET(0x28C6300)
#define EE3F0E0BACB6B388_FDF507416FAD5197_OFFSET UNITYSDK_OFFSET(0x28C64D0)
#define EE3F0E0BACB6B388__CTOR_OFFSET UNITYSDK_OFFSET(0x28C6490)

inline static constexpr unsigned int EE3F0E0BACB6B388_TypeDefinitionIndex = 16339;

class EE3F0E0BACB6B388
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE3F0E0BACB6B388__CTOR_OFFSET))(this);
	}

	::System::Void F1314E3A9182F2F2(::ABEBA93AD61764EF* FB746BD13BCA6BE5)
	{
		return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*))((::PBYTE)hIl2Cpp + EE3F0E0BACB6B388_F1314E3A9182F2F2_OFFSET))(this, FB746BD13BCA6BE5);
	}

	::TA::EnvironmentSystem::Control::MonoESControlCharacterLightingComponent* FDF507416FAD5197()
	{
		return ((::TA::EnvironmentSystem::Control::MonoESControlCharacterLightingComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE3F0E0BACB6B388_FDF507416FAD5197_OFFSET))(this);
	}
};
