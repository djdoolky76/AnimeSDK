#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJDMICEMKBL.h"
#include "unitysdk/System/ValueType.h"

class FFIHMJFKJJN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBECNFMLHII_ABIEBLNONEP_OFFSET UNITYSDK_OFFSET(0x602450)
#define PBECNFMLHII_ACELKILMCMJ_OFFSET UNITYSDK_OFFSET(0x6024D0)
#define PBECNFMLHII_BIEHECGKOCD_OFFSET UNITYSDK_OFFSET(0x6024C0)
#define PBECNFMLHII_BMOLINPDBMM_OFFSET UNITYSDK_OFFSET(0xFD9DF00)
#define PBECNFMLHII_GCEPJPOKBFI_OFFSET UNITYSDK_OFFSET(0xFD9E420)
#define PBECNFMLHII_GEFEFFFLKIN_OFFSET UNITYSDK_OFFSET(0xFD9DD50)
#define PBECNFMLHII_GENANHNBGFG_OFFSET UNITYSDK_OFFSET(0x602350)
#define PBECNFMLHII_GPOAHFFGGIL_OFFSET UNITYSDK_OFFSET(0x6023E0)
#define PBECNFMLHII_KAAELJKKEMC_OFFSET UNITYSDK_OFFSET(0x602360)
#define PBECNFMLHII_LHLFCKDCDPD_OFFSET UNITYSDK_OFFSET(0x602350)
#define PBECNFMLHII_OINIFKNMHNA_OFFSET UNITYSDK_OFFSET(0x602370)
#define PBECNFMLHII_PBCGMBIBAIH_OFFSET UNITYSDK_OFFSET(0x479E20)
#define PBECNFMLHII__CTOR_1_OFFSET UNITYSDK_OFFSET(0x602340)
#define PBECNFMLHII__CTOR_OFFSET UNITYSDK_OFFSET(0x602320)

inline static constexpr unsigned int PBECNFMLHII_TypeDefinitionIndex = 54868;

struct alignas(8) PBECNFMLHII
{
	::System::UInt32 ODGKHFHPLOL; // 0x10
	::System::Byte _padding0[0x4];
	::AJDMICEMKBL ACDFBKNHPAP; // 0x18
	::System::Collections::Generic::List_1<::AJDMICEMKBL>* HEDJNOGIHMF; // 0x28

	::System::Void _ctor(::System::UInt32 DPMNNFANIEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBECNFMLHII__CTOR_OFFSET))(this, DPMNNFANIEC);
	}

	::System::Void _ctor_1(::FFIHMJFKJJN* NLIODKBGJGN)
	{
		return ((::System::Void(*)(::PVOID, ::FFIHMJFKJJN*))((::PBYTE)hIl2Cpp + PBECNFMLHII__CTOR_1_OFFSET))(this, NLIODKBGJGN);
	}

	::System::String* GENANHNBGFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_GENANHNBGFG_OFFSET))(this);
	}

	static ::System::String* BMOLINPDBMM(::AJDMICEMKBL PKMILKOOBLD)
	{
		return ((::System::String*(*)(::AJDMICEMKBL))((::PBYTE)hIl2Cpp + PBECNFMLHII_BMOLINPDBMM_OFFSET))(PKMILKOOBLD);
	}

	::System::String* KAAELJKKEMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_KAAELJKKEMC_OFFSET))(this);
	}

	::System::Boolean OINIFKNMHNA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_OINIFKNMHNA_OFFSET))(this);
	}

	::System::String* GPOAHFFGGIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_GPOAHFFGGIL_OFFSET))(this);
	}

	static ::System::String* GEFEFFFLKIN(::System::Int32 DPMNNFANIEC)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PBECNFMLHII_GEFEFFFLKIN_OFFSET))(DPMNNFANIEC);
	}

	::System::String* LHLFCKDCDPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_LHLFCKDCDPD_OFFSET))(this);
	}

	static ::System::String* GCEPJPOKBFI(::System::Int32 DPMNNFANIEC, ::AJDMICEMKBL PKMILKOOBLD)
	{
		return ((::System::String*(*)(::System::Int32, ::AJDMICEMKBL))((::PBYTE)hIl2Cpp + PBECNFMLHII_GCEPJPOKBFI_OFFSET))(DPMNNFANIEC, PKMILKOOBLD);
	}

	::System::String* ABIEBLNONEP(::AJDMICEMKBL PKMILKOOBLD)
	{
		return ((::System::String*(*)(::PVOID, ::AJDMICEMKBL))((::PBYTE)hIl2Cpp + PBECNFMLHII_ABIEBLNONEP_OFFSET))(this, PKMILKOOBLD);
	}

	::System::String* BIEHECGKOCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_BIEHECGKOCD_OFFSET))(this);
	}

	::System::Boolean ACELKILMCMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_ACELKILMCMJ_OFFSET))(this);
	}

	::System::Boolean PBCGMBIBAIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBECNFMLHII_PBCGMBIBAIH_OFFSET))(this);
	}
};
