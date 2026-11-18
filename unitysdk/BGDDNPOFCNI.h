#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

class IBENDELLLAO;

#define BGDDNPOFCNI_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x1424D770)
#define BGDDNPOFCNI_GONIMLGAMEI_OFFSET UNITYSDK_OFFSET(0x1424D8F0)
#define BGDDNPOFCNI_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x1424D860)
#define BGDDNPOFCNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1424D500)
#define BGDDNPOFCNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1424D820)

inline static constexpr unsigned int BGDDNPOFCNI_TypeDefinitionIndex = 85694;

class BGDDNPOFCNI : public ::BBKFNNHAKBP
{
public:
	::IBENDELLLAO* EBGGCOOPGHL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDDNPOFCNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDDNPOFCNI_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDDNPOFCNI_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDDNPOFCNI_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void GONIMLGAMEI(::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGDDNPOFCNI_GONIMLGAMEI_OFFSET))(this, MNDIBLLFAJI);
	}
};
