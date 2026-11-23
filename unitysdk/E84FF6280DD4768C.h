#pragma once
#include "unitysdk/unitysdk.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem::Control { class MonoESControlOrbitComponent; }

#define E84FF6280DD4768C_F1314E3A9182F2F2_OFFSET UNITYSDK_OFFSET(0x286F750)
#define E84FF6280DD4768C_FDF507416FAD5197_OFFSET UNITYSDK_OFFSET(0x286F950)
#define E84FF6280DD4768C__CTOR_OFFSET UNITYSDK_OFFSET(0x286F910)

inline static constexpr unsigned int E84FF6280DD4768C_TypeDefinitionIndex = 16141;

class E84FF6280DD4768C
{
public:
	::TA::EnvironmentSystem::Control::MonoESControlOrbitComponent* FDF507416FAD5197()
	{
		return ((::TA::EnvironmentSystem::Control::MonoESControlOrbitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + E84FF6280DD4768C_FDF507416FAD5197_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E84FF6280DD4768C__CTOR_OFFSET))(this);
	}

	::System::Void F1314E3A9182F2F2(::ABEBA93AD61764EF* FB746BD13BCA6BE5)
	{
		return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*))((::PBYTE)hIl2Cpp + E84FF6280DD4768C_F1314E3A9182F2F2_OFFSET))(this, FB746BD13BCA6BE5);
	}
};
