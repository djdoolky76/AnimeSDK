#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHLPBOFCLN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PKBPGLBGECF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0DF200)
#define PKBPGLBGECF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0DF1F0)
#define PKBPGLBGECF_KLPAMPAHMAB_OFFSET UNITYSDK_OFFSET(0x1D0DF2F0)
#define PKBPGLBGECF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0DF430)
#define PKBPGLBGECF_MMELOEPFJPG_OFFSET UNITYSDK_OFFSET(0x1D0DF440)
#define PKBPGLBGECF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DF1E0)

inline static constexpr unsigned int PKBPGLBGECF_TypeDefinitionIndex = 14209;

class PKBPGLBGECF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DAHLPBOFCLN HBDPAIKANDB; // 0x18
	::System::String* MEGIDLHAJCK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 ODHJIPIEMKO; // 0x34

	::System::Void _ctor(::DAHLPBOFCLN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DAHLPBOFCLN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PKBPGLBGECF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBPGLBGECF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBPGLBGECF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KLPAMPAHMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBPGLBGECF_KLPAMPAHMAB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBPGLBGECF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MMELOEPFJPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBPGLBGECF_MMELOEPFJPG_OFFSET))(this);
	}
};
