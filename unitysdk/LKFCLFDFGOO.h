#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKFCLFDFGOO_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1258D220)
#define LKFCLFDFGOO_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1258D5A0)
#define LKFCLFDFGOO_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x1258DA00)
#define LKFCLFDFGOO_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1258D3E0)
#define LKFCLFDFGOO_PKLLDPLIDFA_OFFSET UNITYSDK_OFFSET(0x1258D630)
#define LKFCLFDFGOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1258D080)

inline static constexpr unsigned int LKFCLFDFGOO_TypeDefinitionIndex = 62959;

class LKFCLFDFGOO : public ::KBGGKIJMICI
{
public:
	::System::Int32 OMICHOMLNDC; // 0x38
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x3C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKFCLFDFGOO__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFCLFDFGOO_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFCLFDFGOO_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFCLFDFGOO_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void PKLLDPLIDFA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LKFCLFDFGOO_PKLLDPLIDFA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFCLFDFGOO_GPOHLEFFNHE_OFFSET))(this);
	}
};
