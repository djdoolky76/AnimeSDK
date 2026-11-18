#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INBGLNJFNMJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPALFAKIOHA_AOBEOGIDKCM_OFFSET UNITYSDK_OFFSET(0x17FAD000)
#define KPALFAKIOHA_BFCCLGINHMH_OFFSET UNITYSDK_OFFSET(0x17FAC960)
#define KPALFAKIOHA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FAC870)
#define KPALFAKIOHA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FACEB0)
#define KPALFAKIOHA_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x17FACAA0)
#define KPALFAKIOHA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FAC860)
#define KPALFAKIOHA_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x17FACEC0)
#define KPALFAKIOHA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17FACD70)
#define KPALFAKIOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAC850)

inline static constexpr unsigned int KPALFAKIOHA_TypeDefinitionIndex = 16435;

class KPALFAKIOHA : public ::System::Object
{
public:
	::INBGLNJFNMJ HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OGAGKPKBBCG; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 DEEFBGCFNBI; // 0x38
	::System::Int32 LLJLDLNBALK; // 0x3C
	::System::Int32 JEDEMPHDCAK; // 0x40

	::System::Void _ctor(::INBGLNJFNMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INBGLNJFNMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KPALFAKIOHA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BFCCLGINHMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_BFCCLGINHMH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KBIIPJALCNE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPALFAKIOHA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 AOBEOGIDKCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPALFAKIOHA_AOBEOGIDKCM_OFFSET))(this);
	}
};
