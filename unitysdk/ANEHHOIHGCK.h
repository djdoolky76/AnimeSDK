#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNBEBMPIDFC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANEHHOIHGCK_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x15775780)
#define ANEHHOIHGCK_CABFABMELAN_OFFSET UNITYSDK_OFFSET(0x15775650)
#define ANEHHOIHGCK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157751B0)
#define ANEHHOIHGCK_DCDNGIOFFCD_OFFSET UNITYSDK_OFFSET(0x157758C0)
#define ANEHHOIHGCK_DNBHFHFGGEJ_OFFSET UNITYSDK_OFFSET(0x15775B90)
#define ANEHHOIHGCK_FLIPDCJJAOL_OFFSET UNITYSDK_OFFSET(0x157752A0)
#define ANEHHOIHGCK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15775760)
#define ANEHHOIHGCK_LEKGCMFEMHF_OFFSET UNITYSDK_OFFSET(0x157754F0)
#define ANEHHOIHGCK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15775770)
#define ANEHHOIHGCK_POODBAJJEJJ_OFFSET UNITYSDK_OFFSET(0x15775CD0)
#define ANEHHOIHGCK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x157753B0)
#define ANEHHOIHGCK__CTOR_OFFSET UNITYSDK_OFFSET(0x157751A0)

inline static constexpr unsigned int ANEHHOIHGCK_TypeDefinitionIndex = 16744;

class ANEHHOIHGCK : public ::System::Object
{
public:
	::System::String* DIFBFENBBNO; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KHNMFCIKDFG; // 0x18
	::LNBEBMPIDFC HBDPAIKANDB; // 0x20
	::System::String* OAANNOLHBJJ; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean OGMCOHHEOEC; // 0x45
	::System::Boolean JGJDLOIGAOH; // 0x46
	::System::Byte CNIAANMNOCF; // 0x47
	::System::Int32 MAMJJIGGPEF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4C
	::System::Byte _padding0[0x3];
	::System::Int32 BPMHKHIBGEJ; // 0x50

	::System::Void _ctor(::LNBEBMPIDFC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNBEBMPIDFC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ANEHHOIHGCK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FLIPDCJJAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_FLIPDCJJAOL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LEKGCMFEMHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_LEKGCMFEMHF_OFFSET))(this);
	}

	::System::String* CABFABMELAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_CABFABMELAN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DCDNGIOFFCD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_DCDNGIOFFCD_OFFSET))(this);
	}

	::System::Int32 DNBHFHFGGEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_DNBHFHFGGEJ_OFFSET))(this);
	}

	::System::Boolean POODBAJJEJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEHHOIHGCK_POODBAJJEJJ_OFFSET))(this);
	}
};
