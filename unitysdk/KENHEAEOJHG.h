#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MIKOMFIBMBN.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KENHEAEOJHG_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13C54C80)
#define KENHEAEOJHG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13C54A40)
#define KENHEAEOJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C54980)

inline static constexpr unsigned int KENHEAEOJHG_TypeDefinitionIndex = 49663;

class KENHEAEOJHG : public ::KBGGKIJMICI
{
public:
	::MIKOMFIBMBN DKJAMGCNBIB; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KENHEAEOJHG__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHEAEOJHG_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHEAEOJHG_CMFOMGGDPPA_OFFSET))(this);
	}
};
