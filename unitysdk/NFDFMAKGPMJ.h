#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

class JHACLFNMIKO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFDFMAKGPMJ_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13141A40)
#define NFDFMAKGPMJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x131419D0)
#define NFDFMAKGPMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13141910)

inline static constexpr unsigned int NFDFMAKGPMJ_TypeDefinitionIndex = 84333;

class NFDFMAKGPMJ : public ::KBGGKIJMICI
{
public:
	::JHACLFNMIKO* JDLALLFHHFD; // 0x38
	::System::Int32 FHOBDELMJHH; // 0x40

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + NFDFMAKGPMJ__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDFMAKGPMJ_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDFMAKGPMJ_CMFOMGGDPPA_OFFSET))(this);
	}
};
