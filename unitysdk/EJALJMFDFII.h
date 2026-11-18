#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEMEAHPBCEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJALJMFDFII_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17AA72E0)
#define EJALJMFDFII_DKOCPDPOIEA_OFFSET UNITYSDK_OFFSET(0x17AA73D0)
#define EJALJMFDFII_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17AA72C0)
#define EJALJMFDFII_LCDJLNIADPN_OFFSET UNITYSDK_OFFSET(0x17AA6EB0)
#define EJALJMFDFII_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17AA72D0)
#define EJALJMFDFII_MFIDOJHBBGP_OFFSET UNITYSDK_OFFSET(0x17AA7180)
#define EJALJMFDFII__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA6EA0)

inline static constexpr unsigned int EJALJMFDFII_TypeDefinitionIndex = 15984;

class EJALJMFDFII : public ::System::Object
{
public:
	::JEMEAHPBCEN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MCAOLNENANN; // 0x28
	::System::Int32 FBMLCHDEDLB; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 FIELCJDLJLH; // 0x38

	::System::Void _ctor(::JEMEAHPBCEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEMEAHPBCEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJALJMFDFII__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LCDJLNIADPN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJALJMFDFII_LCDJLNIADPN_OFFSET))(this);
	}

	::System::Int32 MFIDOJHBBGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJALJMFDFII_MFIDOJHBBGP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJALJMFDFII_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJALJMFDFII_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJALJMFDFII_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DKOCPDPOIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJALJMFDFII_DKOCPDPOIEA_OFFSET))(this);
	}
};
