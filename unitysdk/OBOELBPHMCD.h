#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

class IBENDELLLAO;

#define OBOELBPHMCD_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x1291DE30)
#define OBOELBPHMCD_GONIMLGAMEI_OFFSET UNITYSDK_OFFSET(0x1291DF20)
#define OBOELBPHMCD_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x1291DFC0)
#define OBOELBPHMCD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1291DAB0)
#define OBOELBPHMCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1291DEE0)

inline static constexpr unsigned int OBOELBPHMCD_TypeDefinitionIndex = 50751;

class OBOELBPHMCD : public ::BBKFNNHAKBP
{
public:
	::IBENDELLLAO* EBGGCOOPGHL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOELBPHMCD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOELBPHMCD_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOELBPHMCD_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void GONIMLGAMEI(::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBOELBPHMCD_GONIMLGAMEI_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOELBPHMCD_KHAEIOINMBG_OFFSET))(this);
	}
};
