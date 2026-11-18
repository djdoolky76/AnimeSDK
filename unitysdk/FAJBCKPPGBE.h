#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

class PKLAICEMAHO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAJBCKPPGBE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11AB1330)
#define FAJBCKPPGBE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11AB12B0)
#define FAJBCKPPGBE__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB1160)

inline static constexpr unsigned int FAJBCKPPGBE_TypeDefinitionIndex = 45090;

class FAJBCKPPGBE : public ::KBGGKIJMICI
{
public:
	::PKLAICEMAHO* NFPGEAJODJN; // 0x38
	::System::Int32 NODJNHOIFNH; // 0x40

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + FAJBCKPPGBE__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJBCKPPGBE_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJBCKPPGBE_CMFOMGGDPPA_OFFSET))(this);
	}
};
