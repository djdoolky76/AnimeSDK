#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CADMJOPHMJL;
class HCLKNFIEOGC;

#define HCLKNFIEOGC_FCBHMHEJNOF_NOHDAEIFLDA_OFFSET UNITYSDK_OFFSET(0x13D837B0)
#define HCLKNFIEOGC_FCBHMHEJNOF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D837A0)

inline static constexpr unsigned int HCLKNFIEOGC_FCBHMHEJNOF_TypeDefinitionIndex = 72321;

class HCLKNFIEOGC_FCBHMHEJNOF : public ::System::Object
{
public:
	::CADMJOPHMJL* LHPFMGBDFPN; // 0x10
	::HCLKNFIEOGC* KLHPEBKNIFB; // 0x18
	::System::UInt32 GDCLMCDBPEP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLKNFIEOGC_FCBHMHEJNOF__CTOR_OFFSET))(this);
	}

	::System::Void NOHDAEIFLDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLKNFIEOGC_FCBHMHEJNOF_NOHDAEIFLDA_OFFSET))(this);
	}
};
