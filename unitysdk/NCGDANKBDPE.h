#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHHGADBINAG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCGDANKBDPE_BPFBNDPCHBC_OFFSET UNITYSDK_OFFSET(0x1BAA1C70)
#define NCGDANKBDPE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAA2780)
#define NCGDANKBDPE_FIFELJDAEBP_OFFSET UNITYSDK_OFFSET(0x1BAA24A0)
#define NCGDANKBDPE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAA2770)
#define NCGDANKBDPE_JILMDDPCPDN_OFFSET UNITYSDK_OFFSET(0x1BAA1F40)
#define NCGDANKBDPE_KADBDDPIKBP_OFFSET UNITYSDK_OFFSET(0x1BAA2360)
#define NCGDANKBDPE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAA2210)
#define NCGDANKBDPE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BAA2220)
#define NCGDANKBDPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA1C60)

inline static constexpr unsigned int NCGDANKBDPE_TypeDefinitionIndex = 17294;

class NCGDANKBDPE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KNECCPDIDGG; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* EDNELNBCNFJ; // 0x18
	::GHHGADBINAG HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* AEJMJCCICCC; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Int32 FBEFLPOJLBK; // 0x48

	::System::Void _ctor(::GHHGADBINAG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GHHGADBINAG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCGDANKBDPE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BPFBNDPCHBC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_BPFBNDPCHBC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JILMDDPCPDN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_JILMDDPCPDN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 KADBDDPIKBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_KADBDDPIKBP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIFELJDAEBP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_FIFELJDAEBP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCGDANKBDPE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDANKBDPE_COFGIJJOFLP_OFFSET))(this);
	}
};
