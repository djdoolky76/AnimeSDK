#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

class IBENDELLLAO;

#define HCFELOCOAMF_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x11008720)
#define HCFELOCOAMF_GONIMLGAMEI_OFFSET UNITYSDK_OFFSET(0x11008810)
#define HCFELOCOAMF_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x110088B0)
#define HCFELOCOAMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x110084B0)
#define HCFELOCOAMF__CTOR_OFFSET UNITYSDK_OFFSET(0x110087D0)

inline static constexpr unsigned int HCFELOCOAMF_TypeDefinitionIndex = 44424;

class HCFELOCOAMF : public ::BBKFNNHAKBP
{
public:
	::IBENDELLLAO* EBGGCOOPGHL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFELOCOAMF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFELOCOAMF_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFELOCOAMF_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void GONIMLGAMEI(::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCFELOCOAMF_GONIMLGAMEI_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFELOCOAMF_KHAEIOINMBG_OFFSET))(this);
	}
};
