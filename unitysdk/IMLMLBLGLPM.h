#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMLMLBLGLPM_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x13C9D060)
#define IMLMLBLGLPM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13C9D260)
#define IMLMLBLGLPM_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x13C9D2F0)
#define IMLMLBLGLPM_LNFCFDIMPGO_OFFSET UNITYSDK_OFFSET(0x13C9D380)
#define IMLMLBLGLPM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13C9D200)
#define IMLMLBLGLPM__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9D020)

inline static constexpr unsigned int IMLMLBLGLPM_TypeDefinitionIndex = 83320;

class IMLMLBLGLPM : public ::KBGGKIJMICI
{
public:
	::System::Int32 AAJKJJJMODO; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + IMLMLBLGLPM__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLMLBLGLPM_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLMLBLGLPM_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLMLBLGLPM_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLMLBLGLPM_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void LNFCFDIMPGO(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IMLMLBLGLPM_LNFCFDIMPGO_OFFSET))(this, MNDIBLLFAJI);
	}
};
