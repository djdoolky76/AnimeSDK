#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOPLBDBEMNC.h"

#define AHAFOEBLCEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF64B00)
#define AHAFOEBLCEM_EPEPMHLBNCC_OFFSET UNITYSDK_OFFSET(0x1FF64B70)
#define AHAFOEBLCEM_FCAFFLMEDBF_OFFSET UNITYSDK_OFFSET(0x1FF64DF0)
#define AHAFOEBLCEM_HMFDBOJCHIB_OFFSET UNITYSDK_OFFSET(0x1FF64C20)
#define AHAFOEBLCEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF64B50)

inline static constexpr unsigned int AHAFOEBLCEM_TypeDefinitionIndex = 28930;

class AHAFOEBLCEM
{
public:
	::System::UInt32 MKMPKLIEOJB; // 0x10
	::System::UInt32 JPIHKNPJKPH; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAFOEBLCEM__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAFOEBLCEM_DISPOSE_OFFSET))(this);
	}

	::System::Void EPEPMHLBNCC(::System::UInt64 MGMDLMBEDJF, ::System::Int16& OBNIAHNMHPF, ::System::Int16& EOGLMAEPALE, ::System::UInt32& BEKLCLFIDKF, ::System::Int16& BHCIOLMNDPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int16&, ::System::Int16&, ::System::UInt32&, ::System::Int16&))((::PBYTE)hIl2Cpp + AHAFOEBLCEM_EPEPMHLBNCC_OFFSET))(this, MGMDLMBEDJF, OBNIAHNMHPF, EOGLMAEPALE, BEKLCLFIDKF, BHCIOLMNDPO);
	}

	::System::UInt64 HMFDBOJCHIB(::KOPLBDBEMNC OBNIAHNMHPF, ::System::Int16 EOGLMAEPALE)
	{
		return ((::System::UInt64(*)(::PVOID, ::KOPLBDBEMNC, ::System::Int16))((::PBYTE)hIl2Cpp + AHAFOEBLCEM_HMFDBOJCHIB_OFFSET))(this, OBNIAHNMHPF, EOGLMAEPALE);
	}

	::System::Void FCAFFLMEDBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAFOEBLCEM_FCAFFLMEDBF_OFFSET))(this);
	}
};
