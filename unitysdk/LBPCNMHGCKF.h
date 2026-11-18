#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEAAPFOCFFA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LBPCNMHGCKF_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x1612CFE0)
#define LBPCNMHGCKF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1612D130)
#define LBPCNMHGCKF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1612CE90)
#define LBPCNMHGCKF_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x1612CD50)
#define LBPCNMHGCKF_KKHBDKDLIBF_OFFSET UNITYSDK_OFFSET(0x1612CEA0)
#define LBPCNMHGCKF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1612D120)
#define LBPCNMHGCKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1612CD40)

inline static constexpr unsigned int LBPCNMHGCKF_TypeDefinitionIndex = 11975;

class LBPCNMHGCKF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DEAAPFOCFFA HBDPAIKANDB; // 0x18
	::System::Int32 NOPAHEPILAI; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 OGAGKPKBBCG; // 0x30
	::System::Int32 BPMMNELACLA; // 0x34

	::System::Void _ctor(::DEAAPFOCFFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DEAAPFOCFFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LBPCNMHGCKF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCNMHGCKF_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBPCNMHGCKF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KKHBDKDLIBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCNMHGCKF_KKHBDKDLIBF_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCNMHGCKF_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCNMHGCKF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCNMHGCKF_COFGIJJOFLP_OFFSET))(this);
	}
};
