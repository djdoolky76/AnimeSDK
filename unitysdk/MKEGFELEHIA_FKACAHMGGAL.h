#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class MKEGFELEHIA;
class PEPGAFEGEME;

#define MKEGFELEHIA_FKACAHMGGAL_IIGDCJDCEEP_OFFSET UNITYSDK_OFFSET(0x12D8FE20)
#define MKEGFELEHIA_FKACAHMGGAL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8FE10)

inline static constexpr unsigned int MKEGFELEHIA_FKACAHMGGAL_TypeDefinitionIndex = 58085;

class MKEGFELEHIA_FKACAHMGGAL : public ::System::Object
{
public:
	::PEPGAFEGEME* IKJFLIBFCJN; // 0x10
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_FKACAHMGGAL__CTOR_OFFSET))(this);
	}

	::System::Void IIGDCJDCEEP(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_FKACAHMGGAL_IIGDCJDCEEP_OFFSET))(this, AAOCANGHBDG);
	}
};
