#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAAEMGLBFOA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GKNFLECCIDG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BACCE90)
#define GKNFLECCIDG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BACCE80)
#define GKNFLECCIDG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BACC870)
#define GKNFLECCIDG_MGMAAJNANAN_OFFSET UNITYSDK_OFFSET(0x1BACCD40)
#define GKNFLECCIDG_NBBLLFANODL_OFFSET UNITYSDK_OFFSET(0x1BACCC00)
#define GKNFLECCIDG_NCMALMMKMAF_OFFSET UNITYSDK_OFFSET(0x1BACC990)
#define GKNFLECCIDG_OOOKBEFEKPF_OFFSET UNITYSDK_OFFSET(0x1BACCAF0)
#define GKNFLECCIDG_PPIMLIGJNFO_OFFSET UNITYSDK_OFFSET(0x1BACC880)
#define GKNFLECCIDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACC860)

inline static constexpr unsigned int GKNFLECCIDG_TypeDefinitionIndex = 13313;

class GKNFLECCIDG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NAAEMGLBFOA HBDPAIKANDB; // 0x18
	::System::String* EGJHEIBOLPC; // 0x28
	::System::String* JDNFBIDBAKC; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Boolean DEAEHAGICGF; // 0x3A
	::System::Byte GCHCDJCFCEG; // 0x3B
	::System::Int32 DMENOHMJCDG; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 DAAGHOKCMNH; // 0x44

	::System::Void _ctor(::NAAEMGLBFOA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NAAEMGLBFOA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GKNFLECCIDG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PPIMLIGJNFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_PPIMLIGJNFO_OFFSET))(this);
	}

	::System::Boolean NCMALMMKMAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_NCMALMMKMAF_OFFSET))(this);
	}

	::System::String* OOOKBEFEKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_OOOKBEFEKPF_OFFSET))(this);
	}

	::System::Int32 NBBLLFANODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_NBBLLFANODL_OFFSET))(this);
	}

	::System::Int32 MGMAAJNANAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_MGMAAJNANAN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNFLECCIDG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNFLECCIDG_COFGIJJOFLP_OFFSET))(this);
	}
};
