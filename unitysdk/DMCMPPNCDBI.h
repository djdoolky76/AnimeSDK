#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDAMBMBHCC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DMCMPPNCDBI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F20CF0)
#define DMCMPPNCDBI_DCADDIOHMCO_OFFSET UNITYSDK_OFFSET(0x17F20DE0)
#define DMCMPPNCDBI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F20F20)
#define DMCMPPNCDBI_JBDBHNKNILI_OFFSET UNITYSDK_OFFSET(0x17F21080)
#define DMCMPPNCDBI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F20F30)
#define DMCMPPNCDBI_MFGPMPHMGBD_OFFSET UNITYSDK_OFFSET(0x17F20F40)
#define DMCMPPNCDBI__CTOR_OFFSET UNITYSDK_OFFSET(0x17F20CE0)

inline static constexpr unsigned int DMCMPPNCDBI_TypeDefinitionIndex = 14371;

class DMCMPPNCDBI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HMDAMBMBHCC HBDPAIKANDB; // 0x18
	::System::Int32 GBENHAHHJMA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 HCDHJPJFHHB; // 0x30
	::System::Int32 CKJFFMHBCGA; // 0x34

	::System::Void _ctor(::HMDAMBMBHCC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HMDAMBMBHCC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DMCMPPNCDBI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCMPPNCDBI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DCADDIOHMCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCMPPNCDBI_DCADDIOHMCO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMCMPPNCDBI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCMPPNCDBI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MFGPMPHMGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCMPPNCDBI_MFGPMPHMGBD_OFFSET))(this);
	}

	::System::Int32 JBDBHNKNILI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCMPPNCDBI_JBDBHNKNILI_OFFSET))(this);
	}
};
