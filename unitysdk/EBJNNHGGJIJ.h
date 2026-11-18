#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBJNNHGGJIJ_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x16BCDFF0)
#define EBJNNHGGJIJ_FDFPNMNEFAJ_OFFSET UNITYSDK_OFFSET(0x16BCE490)
#define EBJNNHGGJIJ_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x16BCE370)
#define EBJNNHGGJIJ_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x16BCE400)
#define EBJNNHGGJIJ_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16BCE1B0)
#define EBJNNHGGJIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16BCDFB0)

inline static constexpr unsigned int EBJNNHGGJIJ_TypeDefinitionIndex = 92428;

class EBJNNHGGJIJ : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + EBJNNHGGJIJ__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNNHGGJIJ_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNNHGGJIJ_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNNHGGJIJ_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJNNHGGJIJ_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void FDFPNMNEFAJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EBJNNHGGJIJ_FDFPNMNEFAJ_OFFSET))(this, KOIBHLHLMFC);
	}
};
