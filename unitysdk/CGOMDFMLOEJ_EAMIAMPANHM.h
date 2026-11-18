#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define CGOMDFMLOEJ_EAMIAMPANHM_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14F28C60)
#define CGOMDFMLOEJ_EAMIAMPANHM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F28C50)

inline static constexpr unsigned int CGOMDFMLOEJ_EAMIAMPANHM_TypeDefinitionIndex = 85865;

class CGOMDFMLOEJ_EAMIAMPANHM : public ::System::Object
{
public:
	::HOCDHMEPPEG IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOMDFMLOEJ_EAMIAMPANHM__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOMDFMLOEJ_EAMIAMPANHM_LIDNPLMPHAL_OFFSET))(this);
	}
};
