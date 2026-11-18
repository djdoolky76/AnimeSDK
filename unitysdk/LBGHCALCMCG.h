#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBGHCALCMCG_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1523C1E0)
#define LBGHCALCMCG_DBHGGEBGPFI_OFFSET UNITYSDK_OFFSET(0x1523C410)
#define LBGHCALCMCG_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1523C380)
#define LBGHCALCMCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1523C1A0)

inline static constexpr unsigned int LBGHCALCMCG_TypeDefinitionIndex = 80091;

class LBGHCALCMCG : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LBGHCALCMCG__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHCALCMCG_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHCALCMCG_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void DBHGGEBGPFI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LBGHCALCMCG_DBHGGEBGPFI_OFFSET))(this, KOIBHLHLMFC);
	}
};
