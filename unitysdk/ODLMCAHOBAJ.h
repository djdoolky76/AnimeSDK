#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNLGPDNGNPG.h"

class JIHCHHMEODI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODLMCAHOBAJ_ACFACBMMHKG_OFFSET UNITYSDK_OFFSET(0xE0F1F70)
#define ODLMCAHOBAJ_GBHBFPIPLJC_OFFSET UNITYSDK_OFFSET(0xE0F28D0)
#define ODLMCAHOBAJ_KBHAFGAAPJF_OFFSET UNITYSDK_OFFSET(0xE0F2690)
#define ODLMCAHOBAJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F1EE0)

inline static constexpr unsigned int ODLMCAHOBAJ_TypeDefinitionIndex = 88824;

class ODLMCAHOBAJ
{
public:
	::System::Collections::Generic::Dictionary_2<::GNLGPDNGNPG, ::System::Collections::Generic::List_1<::JIHCHHMEODI*>*>* OCIHFLBBOOG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLMCAHOBAJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JIHCHHMEODI*>* ACFACBMMHKG(::System::String* AELLPLBJELA)
	{
		return ((::System::Collections::Generic::List_1<::JIHCHHMEODI*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODLMCAHOBAJ_ACFACBMMHKG_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void KBHAFGAAPJF(::JIHCHHMEODI* MBDCMLNBDGM)
	{
		return ((::System::Void(*)(::PVOID, ::JIHCHHMEODI*))((::PBYTE)hIl2Cpp + ODLMCAHOBAJ_KBHAFGAAPJF_OFFSET))(this, MBDCMLNBDGM);
	}

	::System::Void GBHBFPIPLJC(::JIHCHHMEODI* MBDCMLNBDGM)
	{
		return ((::System::Void(*)(::PVOID, ::JIHCHHMEODI*))((::PBYTE)hIl2Cpp + ODLMCAHOBAJ_GBHBFPIPLJC_OFFSET))(this, MBDCMLNBDGM);
	}
};
