#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/System/Numerics/Vector3.h"

#define OJPAPHNKBEN_DDIBFPAGCGD_OFFSET UNITYSDK_OFFSET(0x1EBEE780)
#define OJPAPHNKBEN_JIGBCBKOMJG_OFFSET UNITYSDK_OFFSET(0x1EBEE800)

inline static constexpr unsigned int OJPAPHNKBEN_TypeDefinitionIndex = 28970;

class OJPAPHNKBEN : public ::System::Object
{
public:
	static ::KBKLCGKKIPI DDIBFPAGCGD(::System::Numerics::Vector3 IJPANKCOLCP)
	{
		return ((::KBKLCGKKIPI(*)(::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + OJPAPHNKBEN_DDIBFPAGCGD_OFFSET))(IJPANKCOLCP);
	}

	static ::System::Numerics::Vector3 JIGBCBKOMJG(::KBKLCGKKIPI KMHENGAGGLP)
	{
		return ((::System::Numerics::Vector3(*)(::KBKLCGKKIPI))((::PBYTE)hIl2Cpp + OJPAPHNKBEN_JIGBCBKOMJG_OFFSET))(KMHENGAGGLP);
	}
};
