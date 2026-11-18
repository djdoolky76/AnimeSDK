#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOIKKBIANAI;

#define NOIKKBIANAI_HDPMPFMHNCE_EDDJBFLIKCJ_OFFSET UNITYSDK_OFFSET(0xE0B2FA0)
#define NOIKKBIANAI_HDPMPFMHNCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B2F90)

inline static constexpr unsigned int NOIKKBIANAI_HDPMPFMHNCE_TypeDefinitionIndex = 61745;

class NOIKKBIANAI_HDPMPFMHNCE : public ::System::Object
{
public:
	::NOIKKBIANAI* KLHPEBKNIFB; // 0x10
	::System::Int32 GMPHDFIJPCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKKBIANAI_HDPMPFMHNCE__CTOR_OFFSET))(this);
	}

	::System::Void EDDJBFLIKCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIKKBIANAI_HDPMPFMHNCE_EDDJBFLIKCJ_OFFSET))(this);
	}
};
