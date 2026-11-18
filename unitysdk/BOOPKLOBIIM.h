#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class GECKFNANGKB;
class OBKNEEOLOPB;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOOPKLOBIIM_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14260A60)
#define BOOPKLOBIIM_AMHCOHGJBEN_OFFSET UNITYSDK_OFFSET(0x14260D40)
#define BOOPKLOBIIM_BPANELFLPII_OFFSET UNITYSDK_OFFSET(0x142614F0)
#define BOOPKLOBIIM_DBJLIMIAACI_OFFSET UNITYSDK_OFFSET(0x14261F40)
#define BOOPKLOBIIM_FAJLALLMOOD_OFFSET UNITYSDK_OFFSET(0x142623B0)
#define BOOPKLOBIIM_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x14261460)
#define BOOPKLOBIIM_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x14262430)
#define BOOPKLOBIIM_HIFICEMOLFP_OFFSET UNITYSDK_OFFSET(0x14261BC0)
#define BOOPKLOBIIM_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14261080)
#define BOOPKLOBIIM_PNJOGPLMNBF_OFFSET UNITYSDK_OFFSET(0x142611F0)
#define BOOPKLOBIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x14260800)

inline static constexpr unsigned int BOOPKLOBIIM_TypeDefinitionIndex = 45526;

class BOOPKLOBIIM : public ::KBGGKIJMICI
{
public:
	::OBKNEEOLOPB* HJLKIJBHDBM; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* PGHDHBINDDC; // 0x40
	::GECKFNANGKB* PHBBDGJLLGE; // 0x48
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x50
	::System::Single BFGHPIFHKAO; // 0x54

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + BOOPKLOBIIM__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void PNJOGPLMNBF(::System::Single KKFEGHDJBBH, ::System::Single NGNJIAHOEBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_PNJOGPLMNBF_OFFSET))(this, KKFEGHDJBBH, NGNJIAHOEBC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void BPANELFLPII(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_BPANELFLPII_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Single HIFICEMOLFP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_HIFICEMOLFP_OFFSET))(this);
	}

	::System::Void AMHCOHGJBEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_AMHCOHGJBEN_OFFSET))(this);
	}

	::System::Single DBJLIMIAACI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_DBJLIMIAACI_OFFSET))(this);
	}

	::System::Void FAJLALLMOOD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_FAJLALLMOOD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPKLOBIIM_GPOHLEFFNHE_OFFSET))(this);
	}
};
