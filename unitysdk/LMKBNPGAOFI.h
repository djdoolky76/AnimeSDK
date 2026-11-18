#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJHKEDBIPPK.h"
#include "unitysdk/LMKBNPGAOFI_EGHEAEIAPKA.h"
#include "unitysdk/System/Object.h"

#define LMKBNPGAOFI_COGILJDDFDD_OFFSET UNITYSDK_OFFSET(0x1637C270)
#define LMKBNPGAOFI_EPPCCEEKPEJ_OFFSET UNITYSDK_OFFSET(0x1637B560)

inline static constexpr unsigned int LMKBNPGAOFI_TypeDefinitionIndex = 49618;

class LMKBNPGAOFI : public ::System::Object
{
public:
	static ::System::Void EPPCCEEKPEJ(::HJHKEDBIPPK JBMBMFGENOL, ::LMKBNPGAOFI_EGHEAEIAPKA FANPHGDELCD, ::System::Boolean PFFFMOEEFGH)
	{
		return ((::System::Void(*)(::HJHKEDBIPPK, ::LMKBNPGAOFI_EGHEAEIAPKA, ::System::Boolean))((::PBYTE)hIl2Cpp + LMKBNPGAOFI_EPPCCEEKPEJ_OFFSET))(JBMBMFGENOL, FANPHGDELCD, PFFFMOEEFGH);
	}

	static ::System::Void COGILJDDFDD(::System::Boolean MFBILNDIPOJ)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LMKBNPGAOFI_COGILJDDFDD_OFFSET))(MFBILNDIPOJ);
	}
};
