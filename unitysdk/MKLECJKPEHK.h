#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFDMCKFFPCI.h"
#include "unitysdk/OICFHEBNAEE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKLECJKPEHK_CKJHFNIEHFM_OFFSET UNITYSDK_OFFSET(0x1910C190)
#define MKLECJKPEHK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1910C410)
#define MKLECJKPEHK_FGIKHFLANGN_OFFSET UNITYSDK_OFFSET(0x1910BE80)
#define MKLECJKPEHK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1910C500)
#define MKLECJKPEHK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1910C2D0)
#define MKLECJKPEHK_JOFBFJNNMFG_OFFSET UNITYSDK_OFFSET(0x1910C510)
#define MKLECJKPEHK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1910C180)
#define MKLECJKPEHK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1910BD40)
#define MKLECJKPEHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1910BD30)

inline static constexpr unsigned int MKLECJKPEHK_TypeDefinitionIndex = 13950;

class MKLECJKPEHK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BFNNKJDOPKP; // 0x18
	::System::Collections::Generic::List_1<::OICFHEBNAEE>* LEOEBNELFOM; // 0x20
	::System::String* IENCBDEPMFJ; // 0x28
	::System::String* NFFPNFDEDBN; // 0x30
	::System::String* JPNOHBLNEMO; // 0x38
	::System::Collections::Generic::List_1<::OICFHEBNAEE>* LBCHMJDKFGI; // 0x40
	::System::String* OMDLAHBLCAM; // 0x48
	::FFDMCKFFPCI HBDPAIKANDB; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x60
	::System::Byte GCHCDJCFCEG; // 0x61
	::System::Byte CNIAANMNOCF; // 0x62
	::System::Byte ACIOBDEBDNK; // 0x63
	::System::Int32 PCMOJLNOPPM; // 0x64
	::System::Int32 FFDLIBEHKLA; // 0x68
	::System::Int32 POKJNGILNLB; // 0x6C
	::System::Int32 IFNBFLOPNIC; // 0x70
	::System::Int32 HEGANBHHIFB; // 0x74

	::System::Void _ctor(::FFDMCKFFPCI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FFDMCKFFPCI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKLECJKPEHK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OICFHEBNAEE>* FGIKHFLANGN()
	{
		return ((::System::Collections::Generic::List_1<::OICFHEBNAEE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_FGIKHFLANGN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CKJHFNIEHFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_CKJHFNIEHFM_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKLECJKPEHK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::OICFHEBNAEE>* JOFBFJNNMFG()
	{
		return ((::System::Collections::Generic::List_1<::OICFHEBNAEE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLECJKPEHK_JOFBFJNNMFG_OFFSET))(this);
	}
};
