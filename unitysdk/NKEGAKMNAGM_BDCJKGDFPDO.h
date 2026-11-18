#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGGPIOIJELD;
class NKEGAKMNAGM_FCCMINEDIKO;

#define NKEGAKMNAGM_BDCJKGDFPDO_FPMADAAHLJN_OFFSET UNITYSDK_OFFSET(0x1289A690)
#define NKEGAKMNAGM_BDCJKGDFPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1289A680)

inline static constexpr unsigned int NKEGAKMNAGM_BDCJKGDFPDO_TypeDefinitionIndex = 82155;

class NKEGAKMNAGM_BDCJKGDFPDO : public ::System::Object
{
public:
	::NKEGAKMNAGM_FCCMINEDIKO* EEMOEMFLABI; // 0x10
	::GGGPIOIJELD* CCCBJNLDMEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_BDCJKGDFPDO__CTOR_OFFSET))(this);
	}

	::System::Void FPMADAAHLJN(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_BDCJKGDFPDO_FPMADAAHLJN_OFFSET))(this, JCJDLICAODK);
	}
};
