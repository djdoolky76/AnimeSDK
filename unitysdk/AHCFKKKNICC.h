#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHCFKKKNICC_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x12CF40B0)
#define AHCFKKKNICC_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x12CF4220)
#define AHCFKKKNICC_PNENBEBAJPD_OFFSET UNITYSDK_OFFSET(0x12CF42B0)
#define AHCFKKKNICC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF4070)

inline static constexpr unsigned int AHCFKKKNICC_TypeDefinitionIndex = 78321;

class AHCFKKKNICC : public ::KBGGKIJMICI
{
public:
	::System::Int32 NACGJJKHEJE; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + AHCFKKKNICC__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCFKKKNICC_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCFKKKNICC_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void PNENBEBAJPD(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AHCFKKKNICC_PNENBEBAJPD_OFFSET))(this, MNDIBLLFAJI);
	}
};
