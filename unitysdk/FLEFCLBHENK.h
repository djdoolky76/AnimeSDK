#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"

class GEGKDDOBMON;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLEFCLBHENK_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11C58050)
#define FLEFCLBHENK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11C57FE0)
#define FLEFCLBHENK__CTOR_OFFSET UNITYSDK_OFFSET(0x11C57EC0)

inline static constexpr unsigned int FLEFCLBHENK_TypeDefinitionIndex = 59806;

class FLEFCLBHENK : public ::KBGGKIJMICI
{
public:
	::GEGKDDOBMON* KHKFJHADCGL; // 0x38
	::MoleMole::Config::TimePeriodType HODAIDNDKHD; // 0x40

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + FLEFCLBHENK__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEFCLBHENK_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEFCLBHENK_CMFOMGGDPPA_OFFSET))(this);
	}
};
