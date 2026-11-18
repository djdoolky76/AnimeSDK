#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIPALAIEECF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OKOAGBMBDNK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD8ED40)
#define OKOAGBMBDNK_DGCLDCALFMI_OFFSET UNITYSDK_OFFSET(0x1AD8EAC0)
#define OKOAGBMBDNK_DNJPHNAOBDF_OFFSET UNITYSDK_OFFSET(0x1AD8EC00)
#define OKOAGBMBDNK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD8E960)
#define OKOAGBMBDNK_IEMIFEOMGPD_OFFSET UNITYSDK_OFFSET(0x1AD8E970)
#define OKOAGBMBDNK_KFDJDPLPIOI_OFFSET UNITYSDK_OFFSET(0x1AD8EE30)
#define OKOAGBMBDNK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD8EAB0)
#define OKOAGBMBDNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8E950)

inline static constexpr unsigned int OKOAGBMBDNK_TypeDefinitionIndex = 14647;

class OKOAGBMBDNK : public ::System::Object
{
public:
	::LIPALAIEECF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 NPEFCEGBBPB; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 DJMHGHNAKFA; // 0x30
	::System::Int32 CPBPBDGGPDF; // 0x34
	::System::Int32 NEDPCFIBKNM; // 0x38

	::System::Void _ctor(::LIPALAIEECF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LIPALAIEECF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OKOAGBMBDNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IEMIFEOMGPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_IEMIFEOMGPD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DGCLDCALFMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_DGCLDCALFMI_OFFSET))(this);
	}

	::System::Int32 DNJPHNAOBDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_DNJPHNAOBDF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KFDJDPLPIOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOAGBMBDNK_KFDJDPLPIOI_OFFSET))(this);
	}
};
