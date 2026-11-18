#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEDHJPEPDNC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NKNNOLJIKOI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17354C90)
#define NKNNOLJIKOI_FJHJBEBLGPN_OFFSET UNITYSDK_OFFSET(0x17354A40)
#define NKNNOLJIKOI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17354ED0)
#define NKNNOLJIKOI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17354D80)
#define NKNNOLJIKOI_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x17354D90)
#define NKNNOLJIKOI_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x17354B50)
#define NKNNOLJIKOI__CTOR_OFFSET UNITYSDK_OFFSET(0x17354A30)

inline static constexpr unsigned int NKNNOLJIKOI_TypeDefinitionIndex = 9560;

class NKNNOLJIKOI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* JLEKOBCNCFB; // 0x18
	::MEDHJPEPDNC HBDPAIKANDB; // 0x20
	::System::Int32 PNHIMPBNMIH; // 0x30
	::System::Int32 HDDMLDDOMFD; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::MEDHJPEPDNC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MEDHJPEPDNC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NKNNOLJIKOI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FJHJBEBLGPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNNOLJIKOI_FJHJBEBLGPN_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNNOLJIKOI_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNNOLJIKOI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNNOLJIKOI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNNOLJIKOI_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKNNOLJIKOI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
