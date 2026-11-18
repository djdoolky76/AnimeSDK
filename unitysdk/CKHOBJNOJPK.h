#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFLNIGNHMMK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKHOBJNOJPK_AGEMBBBODIM_OFFSET UNITYSDK_OFFSET(0x19ACFB70)
#define CKHOBJNOJPK_BOEJCDPACFE_OFFSET UNITYSDK_OFFSET(0x19ACFA20)
#define CKHOBJNOJPK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ACF930)
#define CKHOBJNOJPK_DFOPNFPMJDA_OFFSET UNITYSDK_OFFSET(0x19ACFFA0)
#define CKHOBJNOJPK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ACFE30)
#define CKHOBJNOJPK_IMDEKKJIOHI_OFFSET UNITYSDK_OFFSET(0x19ACF7F0)
#define CKHOBJNOJPK_JGLFELHMBHF_OFFSET UNITYSDK_OFFSET(0x19ACF6B0)
#define CKHOBJNOJPK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ACFB60)
#define CKHOBJNOJPK_MBHOKGCNDBF_OFFSET UNITYSDK_OFFSET(0x19ACFE40)
#define CKHOBJNOJPK_MHEEPCIODAB_OFFSET UNITYSDK_OFFSET(0x19ACFCD0)
#define CKHOBJNOJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACF6A0)

inline static constexpr unsigned int CKHOBJNOJPK_TypeDefinitionIndex = 14787;

class CKHOBJNOJPK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EFLNIGNHMMK HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* POADEHFLGKP; // 0x28
	::System::Int32 GKNCKCIIIOB; // 0x30
	::System::Int32 AKAAKALMNAJ; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Boolean JACCNHDLIDK; // 0x39
	::System::Boolean PLBOHPMOEIO; // 0x3A
	::System::Byte CNIAANMNOCF; // 0x3B
	::System::Boolean NFGFOAKOLLL; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte _padding0[0x2];
	::System::Int32 LAAIOKPPFOM; // 0x40

	::System::Void _ctor(::EFLNIGNHMMK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFLNIGNHMMK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CKHOBJNOJPK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JGLFELHMBHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_JGLFELHMBHF_OFFSET))(this);
	}

	::System::Int32 IMDEKKJIOHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_IMDEKKJIOHI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BOEJCDPACFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_BOEJCDPACFE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean AGEMBBBODIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_AGEMBBBODIM_OFFSET))(this);
	}

	::System::Boolean MHEEPCIODAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_MHEEPCIODAB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean MBHOKGCNDBF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_MBHOKGCNDBF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DFOPNFPMJDA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHOBJNOJPK_DFOPNFPMJDA_OFFSET))(this);
	}
};
