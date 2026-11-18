#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"

#define ODIPEGLGPEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B778790)
#define ODIPEGLGPEP_HJDJJHAHMLO_OFFSET UNITYSDK_OFFSET(0x1B778850)
#define ODIPEGLGPEP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1B778640)
#define ODIPEGLGPEP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B7787D0)
#define ODIPEGLGPEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B778830)

inline static constexpr unsigned int ODIPEGLGPEP_TypeDefinitionIndex = 49109;

class ODIPEGLGPEP
{
public:
	::System::DateTime KNJMGIKCGCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIPEGLGPEP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIPEGLGPEP_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIPEGLGPEP_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODIPEGLGPEP_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HJDJJHAHMLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIPEGLGPEP_HJDJJHAHMLO_OFFSET))(this);
	}
};
