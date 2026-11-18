#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class GECKFNANGKB;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBHOHJADHHO_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x18652290)
#define LBHOHJADHHO_AMHCOHGJBEN_OFFSET UNITYSDK_OFFSET(0x186524D0)
#define LBHOHJADHHO_FAJLALLMOOD_OFFSET UNITYSDK_OFFSET(0x18652980)
#define LBHOHJADHHO_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x18652BE0)
#define LBHOHJADHHO_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x18652B50)
#define LBHOHJADHHO_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x18652810)
#define LBHOHJADHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x18652030)

inline static constexpr unsigned int LBHOHJADHHO_TypeDefinitionIndex = 76104;

class LBHOHJADHHO : public ::KBGGKIJMICI
{
public:
	::GECKFNANGKB* PHBBDGJLLGE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* PGHDHBINDDC; // 0x40
	::System::Single BFGHPIFHKAO; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x4C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LBHOHJADHHO__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHOHJADHHO_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHOHJADHHO_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void FAJLALLMOOD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LBHOHJADHHO_FAJLALLMOOD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void AMHCOHGJBEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHOHJADHHO_AMHCOHGJBEN_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHOHJADHHO_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHOHJADHHO_GPGLNOBDBGJ_OFFSET))(this);
	}
};
