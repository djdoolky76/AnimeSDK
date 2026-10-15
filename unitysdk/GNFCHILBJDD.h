#pragma once
#include "unitysdk/unitysdk.h"
class ODGPPIHLOFF;

#define GNFCHILBJDD_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15AF5450)
#define GNFCHILBJDD_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15AF52C0)
#define GNFCHILBJDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF52B0)

inline static constexpr unsigned int GNFCHILBJDD_TypeDefinitionIndex = 49205;

	class GNFCHILBJDD
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNFCHILBJDD_CTOR_OFFSET))(this, a1);
		}

		::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFCHILBJDD_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::ODGPPIHLOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + GNFCHILBJDD_ABKBOGIGAEH_OFFSET))(this, a1);
		}

	};
