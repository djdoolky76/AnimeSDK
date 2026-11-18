#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDGACIEKGAP_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14FCF7C0)
#define KDGACIEKGAP_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x14FCFE10)
#define KDGACIEKGAP_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x14FCFD80)
#define KDGACIEKGAP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14FCF980)
#define KDGACIEKGAP_NBGCALKIOLF_OFFSET UNITYSDK_OFFSET(0x14FCFB40)
#define KDGACIEKGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCF780)

inline static constexpr unsigned int KDGACIEKGAP_TypeDefinitionIndex = 44201;

class KDGACIEKGAP : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KDGACIEKGAP__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGACIEKGAP_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGACIEKGAP_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void NBGCALKIOLF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KDGACIEKGAP_NBGCALKIOLF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGACIEKGAP_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGACIEKGAP_GPGLNOBDBGJ_OFFSET))(this);
	}
};
