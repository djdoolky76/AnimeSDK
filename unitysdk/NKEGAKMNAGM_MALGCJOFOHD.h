#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGGPIOIJELD;
class NKEGAKMNAGM_PIHCPGNAFCF;

#define NKEGAKMNAGM_MALGCJOFOHD_LAALAGKNPDF_OFFSET UNITYSDK_OFFSET(0x1159DAF0)
#define NKEGAKMNAGM_MALGCJOFOHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1159DAE0)

inline static constexpr unsigned int NKEGAKMNAGM_MALGCJOFOHD_TypeDefinitionIndex = 82159;

class NKEGAKMNAGM_MALGCJOFOHD : public ::System::Object
{
public:
	::GGGPIOIJELD* CCCBJNLDMEM; // 0x10
	::NKEGAKMNAGM_PIHCPGNAFCF* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_MALGCJOFOHD__CTOR_OFFSET))(this);
	}

	::System::Void LAALAGKNPDF(::System::Boolean JCJDLICAODK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_MALGCJOFOHD_LAALAGKNPDF_OFFSET))(this, JCJDLICAODK);
	}
};
