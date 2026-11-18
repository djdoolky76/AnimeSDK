#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILHDJBLBBBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KLLODOABBLJ_CHJAPAPDPJE_OFFSET UNITYSDK_OFFSET(0x19581140)
#define KLLODOABBLJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195813A0)
#define KLLODOABBLJ_EDBBIMMCLPD_OFFSET UNITYSDK_OFFSET(0x19581020)
#define KLLODOABBLJ_FKJMNANKEHD_OFFSET UNITYSDK_OFFSET(0x19581490)
#define KLLODOABBLJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19581130)
#define KLLODOABBLJ_IBJGIJFFGMN_OFFSET UNITYSDK_OFFSET(0x19580F10)
#define KLLODOABBLJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19581250)
#define KLLODOABBLJ_NKFALLBKIHF_OFFSET UNITYSDK_OFFSET(0x19581260)
#define KLLODOABBLJ_OOFAAKAPADO_OFFSET UNITYSDK_OFFSET(0x19580E00)
#define KLLODOABBLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19580DF0)

inline static constexpr unsigned int KLLODOABBLJ_TypeDefinitionIndex = 15980;

class KLLODOABBLJ : public ::System::Object
{
public:
	::System::String* GGFNECNPBOF; // 0x10
	::ILHDJBLBBBD HBDPAIKANDB; // 0x18
	::System::String* NBCDELHPIFB; // 0x28
	::System::String* NIEJFBHFKHN; // 0x30
	::System::String* LNMCDFGPFEM; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::String* DPKIOBNAJEK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Byte ACIOBDEBDNK; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 AHJEMEAOFDB; // 0x54

	::System::Void _ctor(::ILHDJBLBBBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ILHDJBLBBBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLLODOABBLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OOFAAKAPADO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_OOFAAKAPADO_OFFSET))(this);
	}

	::System::String* IBJGIJFFGMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_IBJGIJFFGMN_OFFSET))(this);
	}

	::System::String* EDBBIMMCLPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_EDBBIMMCLPD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLLODOABBLJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CHJAPAPDPJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_CHJAPAPDPJE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 NKFALLBKIHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_NKFALLBKIHF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FKJMNANKEHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLODOABBLJ_FKJMNANKEHD_OFFSET))(this);
	}
};
