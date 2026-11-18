#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBDJCMFAPBP_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x13537E30)
#define EBDJCMFAPBP_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x13537FA0)
#define EBDJCMFAPBP_PGHLHPCEOGJ_OFFSET UNITYSDK_OFFSET(0x13538030)
#define EBDJCMFAPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x13537D70)

inline static constexpr unsigned int EBDJCMFAPBP_TypeDefinitionIndex = 66661;

class EBDJCMFAPBP : public ::KBGGKIJMICI
{
public:
	::System::Int32 DBGJNFKBEJK; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + EBDJCMFAPBP__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDJCMFAPBP_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDJCMFAPBP_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void PGHLHPCEOGJ(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EBDJCMFAPBP_PGHLHPCEOGJ_OFFSET))(this, MNDIBLLFAJI);
	}
};
