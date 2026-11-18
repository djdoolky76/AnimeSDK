#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class GGIFOKDPDNG;
class MKEGFELEHIA;

#define MKEGFELEHIA_CMAJFOBLILL_CGMFLFIBGJF_OFFSET UNITYSDK_OFFSET(0x10774180)
#define MKEGFELEHIA_CMAJFOBLILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1076A4B0)

inline static constexpr unsigned int MKEGFELEHIA_CMAJFOBLILL_TypeDefinitionIndex = 58088;

class MKEGFELEHIA_CMAJFOBLILL : public ::System::Object
{
public:
	::GGIFOKDPDNG* FAPDDEKECCL; // 0x10
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_CMAJFOBLILL__CTOR_OFFSET))(this);
	}

	::System::Void CGMFLFIBGJF(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_CMAJFOBLILL_CGMFLFIBGJF_OFFSET))(this, AAOCANGHBDG);
	}
};
