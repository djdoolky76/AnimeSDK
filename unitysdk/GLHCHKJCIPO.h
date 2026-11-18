#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COJCEEHGOFM_KHHBEGIABOH.h"
#include "unitysdk/GLHCHKJCIPO_FDEBGJEMCGA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Object; }

#define GLHCHKJCIPO_HBNKDBHLINP_OFFSET UNITYSDK_OFFSET(0x6E0490)
#define GLHCHKJCIPO_IMHKLBEOIMC_OFFSET UNITYSDK_OFFSET(0x6E0410)
#define GLHCHKJCIPO_LDEFGNDLDMK_OFFSET UNITYSDK_OFFSET(0x125D9EE0)
#define GLHCHKJCIPO_NLAOJIFGHDP_OFFSET UNITYSDK_OFFSET(0x6E04E0)
#define GLHCHKJCIPO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6E04F0)
#define GLHCHKJCIPO_OBFHKGADHCM_1_OFFSET UNITYSDK_OFFSET(0x125D9E20)
#define GLHCHKJCIPO_OBFHKGADHCM_OFFSET UNITYSDK_OFFSET(0x6E0420)
#define GLHCHKJCIPO_PPPDHLGPHKK_OFFSET UNITYSDK_OFFSET(0x6E0430)

inline static constexpr unsigned int GLHCHKJCIPO_TypeDefinitionIndex = 64751;

struct alignas(4) GLHCHKJCIPO
{
	// static const ::System::Int32 APJDEGCCOBH = 0xF; // 0x0
	// static const ::System::UInt32 KFPGMCOBGNN = 0x7FFF; // 0x0
	// static const ::System::UInt32 HPNAIIHPBJL = 0xFFFF8000; // 0x0
	// static const ::System::Int32 JJLGJPNBNJD = 0x1F; // 0x0
	// static const ::System::Int32 IDDIGIBANFC = 0x1F; // 0x0
	::GLHCHKJCIPO_FDEBGJEMCGA BOHBDHAPLDN; // 0x10
	::System::UInt32 KDOKMHKLHJG; // 0x14

	::System::Void IMHKLBEOIMC(::System::Int32 ABHBKFJKINO, ::System::Boolean NPLHBKMFPML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_IMHKLBEOIMC_OFFSET))(this, ABHBKFJKINO, NPLHBKMFPML);
	}

	::COJCEEHGOFM_KHHBEGIABOH OBFHKGADHCM()
	{
		return ((::COJCEEHGOFM_KHHBEGIABOH(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_OBFHKGADHCM_OFFSET))(this);
	}

	::System::Boolean PPPDHLGPHKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_PPPDHLGPHKK_OFFSET))(this);
	}

	static ::System::ValueTuple_2<::System::Object*, ::System::Boolean> LDEFGNDLDMK(::COJCEEHGOFM_KHHBEGIABOH CIFBMLFIKDO)
	{
		return ((::System::ValueTuple_2<::System::Object*, ::System::Boolean>(*)(::COJCEEHGOFM_KHHBEGIABOH))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_LDEFGNDLDMK_OFFSET))(CIFBMLFIKDO);
	}

	static ::COJCEEHGOFM_KHHBEGIABOH OBFHKGADHCM_1(::GLHCHKJCIPO_FDEBGJEMCGA JKBLDFBGBPK, ::System::Boolean LLGMIHBNLIL)
	{
		return ((::COJCEEHGOFM_KHHBEGIABOH(*)(::GLHCHKJCIPO_FDEBGJEMCGA, ::System::Boolean))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_OBFHKGADHCM_1_OFFSET))(JKBLDFBGBPK, LLGMIHBNLIL);
	}

	::System::Boolean HBNKDBHLINP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_HBNKDBHLINP_OFFSET))(this);
	}

	::System::Void NLAOJIFGHDP(::COJCEEHGOFM_KHHBEGIABOH CIFBMLFIKDO, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::COJCEEHGOFM_KHHBEGIABOH, ::System::Int32))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_NLAOJIFGHDP_OFFSET))(this, CIFBMLFIKDO, ABHBKFJKINO);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCHKJCIPO_NPOLNFDBOOD_OFFSET))(this);
	}
};
