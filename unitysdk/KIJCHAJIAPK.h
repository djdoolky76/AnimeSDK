#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIJCHAJIAPK_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1790C950)
#define KIJCHAJIAPK_BIENFAHNKNJ_OFFSET UNITYSDK_OFFSET(0x1790CCD0)
#define KIJCHAJIAPK_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1790CEA0)
#define KIJCHAJIAPK_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x1790CF30)
#define KIJCHAJIAPK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1790CB10)
#define KIJCHAJIAPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1790C890)

inline static constexpr unsigned int KIJCHAJIAPK_TypeDefinitionIndex = 77971;

class KIJCHAJIAPK : public ::KBGGKIJMICI
{
public:
	::System::Int32 HFPCJJLPEBD; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KIJCHAJIAPK__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCHAJIAPK_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCHAJIAPK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void BIENFAHNKNJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KIJCHAJIAPK_BIENFAHNKNJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCHAJIAPK_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCHAJIAPK_GPOHLEFFNHE_OFFSET))(this);
	}
};
