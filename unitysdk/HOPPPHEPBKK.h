#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOPPPHEPBKK_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x15DCF950)
#define HOPPPHEPBKK_BIENFAHNKNJ_OFFSET UNITYSDK_OFFSET(0x15DCFD60)
#define HOPPPHEPBKK_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x15DCFCD0)
#define HOPPPHEPBKK_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x15DCFF10)
#define HOPPPHEPBKK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x15DCFB10)
#define HOPPPHEPBKK__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCF890)

inline static constexpr unsigned int HOPPPHEPBKK_TypeDefinitionIndex = 51703;

class HOPPPHEPBKK : public ::KBGGKIJMICI
{
public:
	::System::Int32 PDJJKFEJBFK; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + HOPPPHEPBKK__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPPPHEPBKK_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPPPHEPBKK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPPPHEPBKK_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void BIENFAHNKNJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HOPPPHEPBKK_BIENFAHNKNJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPPPHEPBKK_GPOHLEFFNHE_OFFSET))(this);
	}
};
