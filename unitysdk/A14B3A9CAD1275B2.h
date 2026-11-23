#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define A14B3A9CAD1275B2_AD7C3F18C9A4EA5E_OFFSET UNITYSDK_OFFSET(0x1BC9370)
#define A14B3A9CAD1275B2_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1BC9260)
#define A14B3A9CAD1275B2__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A14B3A9CAD1275B2_TypeDefinitionIndex = 278;

class A14B3A9CAD1275B2 : public ::EFC4AEA2121EC272
{
public:
	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A14B3A9CAD1275B2_FCC7443573DD0222_OFFSET))(this);
	}

	::UnityEngine::Vector2 AD7C3F18C9A4EA5E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + A14B3A9CAD1275B2_AD7C3F18C9A4EA5E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A14B3A9CAD1275B2__CTOR_OFFSET))(this);
	}
};
