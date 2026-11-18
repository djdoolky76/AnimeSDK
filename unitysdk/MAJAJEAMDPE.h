#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAJAJEAMDPE_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x18523260)
#define MAJAJEAMDPE_DBHGGEBGPFI_OFFSET UNITYSDK_OFFSET(0x18523490)
#define MAJAJEAMDPE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x18523400)
#define MAJAJEAMDPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18523220)

inline static constexpr unsigned int MAJAJEAMDPE_TypeDefinitionIndex = 75141;

class MAJAJEAMDPE : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MAJAJEAMDPE__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJAJEAMDPE_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJAJEAMDPE_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void DBHGGEBGPFI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MAJAJEAMDPE_DBHGGEBGPFI_OFFSET))(this, KOIBHLHLMFC);
	}
};
