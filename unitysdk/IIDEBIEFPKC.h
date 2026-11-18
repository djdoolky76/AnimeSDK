#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POAALPANIPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIDEBIEFPKC_ABOKPLGNDME_OFFSET UNITYSDK_OFFSET(0x17480CF0)
#define IIDEBIEFPKC_BECNMBNMDGH_OFFSET UNITYSDK_OFFSET(0x17480380)
#define IIDEBIEFPKC_CFEIAEMHOAP_OFFSET UNITYSDK_OFFSET(0x17480750)
#define IIDEBIEFPKC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17480660)
#define IIDEBIEFPKC_DFCNJEAHDKL_OFFSET UNITYSDK_OFFSET(0x17480A20)
#define IIDEBIEFPKC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17480650)
#define IIDEBIEFPKC_JABNIKBHMAA_OFFSET UNITYSDK_OFFSET(0x17480FC0)
#define IIDEBIEFPKC_JCGDDOAKPAF_OFFSET UNITYSDK_OFFSET(0x174813D0)
#define IIDEBIEFPKC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x174816A0)
#define IIDEBIEFPKC_MPLGAOCAIAL_OFFSET UNITYSDK_OFFSET(0x17481100)
#define IIDEBIEFPKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17480370)

inline static constexpr unsigned int IIDEBIEFPKC_TypeDefinitionIndex = 9641;

class IIDEBIEFPKC : public ::System::Object
{
public:
	::POAALPANIPE HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* FAJJAPIFIPP; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* BJNKFICMOOA; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* KKNKOJIDHIB; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* DKENNNEAPFJ; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* GHNEKKFMIBP; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* DEDCHEPNMOC; // 0x50
	::System::Int32 NPHLAHOILHA; // 0x58
	::System::Byte CNIAANMNOCF; // 0x5C
	::System::Byte ACIOBDEBDNK; // 0x5D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x5E

	::System::Void _ctor(::POAALPANIPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POAALPANIPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IIDEBIEFPKC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BECNMBNMDGH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_BECNMBNMDGH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CFEIAEMHOAP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_CFEIAEMHOAP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DFCNJEAHDKL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_DFCNJEAHDKL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ABOKPLGNDME()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_ABOKPLGNDME_OFFSET))(this);
	}

	::System::Int32 JABNIKBHMAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_JABNIKBHMAA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MPLGAOCAIAL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_MPLGAOCAIAL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JCGDDOAKPAF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_JCGDDOAKPAF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDEBIEFPKC_LJANCIBECFG_OFFSET))(this);
	}
};
