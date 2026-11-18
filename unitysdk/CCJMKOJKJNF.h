#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKDBKHGIFGO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CCJMKOJKJNF_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x17F04DE0)
#define CCJMKOJKJNF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F04F20)
#define CCJMKOJKJNF_DKKAOEHGMBP_OFFSET UNITYSDK_OFFSET(0x17F04CA0)
#define CCJMKOJKJNF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F05120)
#define CCJMKOJKJNF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F04C90)
#define CCJMKOJKJNF_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x17F05010)
#define CCJMKOJKJNF_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x17F05130)
#define CCJMKOJKJNF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17F04B50)
#define CCJMKOJKJNF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F04B40)

inline static constexpr unsigned int CCJMKOJKJNF_TypeDefinitionIndex = 10195;

class CCJMKOJKJNF : public ::System::Object
{
public:
	::System::String* NDKIHENAPHA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::LKDBKHGIFGO HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 FEMJAIBIMDL; // 0x34
	::System::Int32 MPLJBPLACJK; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 BPMHKHIBGEJ; // 0x40

	::System::Void _ctor(::LKDBKHGIFGO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LKDBKHGIFGO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CCJMKOJKJNF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DKKAOEHGMBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_DKKAOEHGMBP_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_MLMPIEEGOGH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJMKOJKJNF_ODGGIAADMLO_OFFSET))(this);
	}
};
