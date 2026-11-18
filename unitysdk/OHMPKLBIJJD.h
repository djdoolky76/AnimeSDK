#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHMPKLBIJJD_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x10073170)
#define OHMPKLBIJJD_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x10072FF0)
#define OHMPKLBIJJD__CTOR_OFFSET UNITYSDK_OFFSET(0x10072EC0)

inline static constexpr unsigned int OHMPKLBIJJD_TypeDefinitionIndex = 64330;

class OHMPKLBIJJD : public ::KBGGKIJMICI
{
public:
	::System::Int32 BELNJJKMMJP; // 0x38
	::System::Int32 JJGNKFNINLM; // 0x3C
	::System::Int32 MGNMJMACKLO; // 0x40

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + OHMPKLBIJJD__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMPKLBIJJD_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMPKLBIJJD_CMFOMGGDPPA_OFFSET))(this);
	}
};
