#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPIOEFOPCCM.h"
#include "unitysdk/DJBPFFLIECG.h"

class OPKMGFHLIOP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMDPDFLDFBC_JIDHOKIDBHP_OFFSET UNITYSDK_OFFSET(0x129A7720)
#define KMDPDFLDFBC_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x129A7380)
#define KMDPDFLDFBC_OJNAODOBGII_1_OFFSET UNITYSDK_OFFSET(0x129A7900)
#define KMDPDFLDFBC_OJNAODOBGII_2_OFFSET UNITYSDK_OFFSET(0x129A7520)
#define KMDPDFLDFBC_OJNAODOBGII_OFFSET UNITYSDK_OFFSET(0x129A73D0)
#define KMDPDFLDFBC_ONSTART_OFFSET UNITYSDK_OFFSET(0x129A7340)
#define KMDPDFLDFBC__CTOR_OFFSET UNITYSDK_OFFSET(0x129A73C0)

inline static constexpr unsigned int KMDPDFLDFBC_TypeDefinitionIndex = 85056;

class KMDPDFLDFBC : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDPDFLDFBC__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDPDFLDFBC_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDPDFLDFBC_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OJNAODOBGII(::System::Int32 MGMDLMBEDJF, ::CPIOEFOPCCM OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CPIOEFOPCCM))((::PBYTE)hIl2Cpp + KMDPDFLDFBC_OJNAODOBGII_OFFSET))(this, MGMDLMBEDJF, OBNIAHNMHPF);
	}

	::System::Void JIDHOKIDBHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDPDFLDFBC_JIDHOKIDBHP_OFFSET))(this);
	}

	::System::Void OJNAODOBGII_1(::System::Collections::Generic::List_1<::System::UInt32>* JGGELGHFMLI, ::CPIOEFOPCCM OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::CPIOEFOPCCM))((::PBYTE)hIl2Cpp + KMDPDFLDFBC_OJNAODOBGII_1_OFFSET))(this, JGGELGHFMLI, OBNIAHNMHPF);
	}

	::System::Void OJNAODOBGII_2(::OPKMGFHLIOP* HEJIBNEHLIG, ::CPIOEFOPCCM OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::OPKMGFHLIOP*, ::CPIOEFOPCCM))((::PBYTE)hIl2Cpp + KMDPDFLDFBC_OJNAODOBGII_2_OFFSET))(this, HEJIBNEHLIG, OBNIAHNMHPF);
	}
};
