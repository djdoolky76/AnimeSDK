#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEHGFCOFMMC_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1980E730)
#define JEHGFCOFMMC_GJLFHDFOKLL_OFFSET UNITYSDK_OFFSET(0x1980EAB0)
#define JEHGFCOFMMC_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1980EF60)
#define JEHGFCOFMMC_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x1980ECB0)
#define JEHGFCOFMMC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1980E8F0)
#define JEHGFCOFMMC_PKLLDPLIDFA_OFFSET UNITYSDK_OFFSET(0x1980ED40)
#define JEHGFCOFMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1980E5F0)

inline static constexpr unsigned int JEHGFCOFMMC_TypeDefinitionIndex = 80205;

class JEHGFCOFMMC : public ::KBGGKIJMICI
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + JEHGFCOFMMC__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHGFCOFMMC_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHGFCOFMMC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GJLFHDFOKLL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JEHGFCOFMMC_GJLFHDFOKLL_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHGFCOFMMC_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void PKLLDPLIDFA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JEHGFCOFMMC_PKLLDPLIDFA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHGFCOFMMC_GPGLNOBDBGJ_OFFSET))(this);
	}
};
