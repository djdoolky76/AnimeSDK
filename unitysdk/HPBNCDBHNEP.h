#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

class IBENDELLLAO;

#define HPBNCDBHNEP_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x10128520)
#define HPBNCDBHNEP_GONIMLGAMEI_OFFSET UNITYSDK_OFFSET(0x10128610)
#define HPBNCDBHNEP_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x101286B0)
#define HPBNCDBHNEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10128180)
#define HPBNCDBHNEP__CTOR_OFFSET UNITYSDK_OFFSET(0x101285D0)

inline static constexpr unsigned int HPBNCDBHNEP_TypeDefinitionIndex = 41327;

class HPBNCDBHNEP : public ::BBKFNNHAKBP
{
public:
	::IBENDELLLAO* EBGGCOOPGHL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBNCDBHNEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBNCDBHNEP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBNCDBHNEP_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void GONIMLGAMEI(::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPBNCDBHNEP_GONIMLGAMEI_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBNCDBHNEP_KHAEIOINMBG_OFFSET))(this);
	}
};
