#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPLOEIIKIP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GOBCPKGGPGD_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x15A84E40)
#define GOBCPKGGPGD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A84F80)
#define GOBCPKGGPGD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x15A851A0)
#define GOBCPKGGPGD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A85180)
#define GOBCPKGGPGD_HOBFMMLPLGD_OFFSET UNITYSDK_OFFSET(0x15A85070)
#define GOBCPKGGPGD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A85190)
#define GOBCPKGGPGD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A84E30)

inline static constexpr unsigned int GOBCPKGGPGD_TypeDefinitionIndex = 9935;

class GOBCPKGGPGD : public ::System::Object
{
public:
	::NHPLOEIIKIP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* EAELDHGMPPD; // 0x28
	::System::String* IENCBDEPMFJ; // 0x30
	::System::Int32 NOMEHNJKEHN; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::NHPLOEIIKIP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHPLOEIIKIP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GOBCPKGGPGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBCPKGGPGD_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBCPKGGPGD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HOBFMMLPLGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBCPKGGPGD_HOBFMMLPLGD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOBCPKGGPGD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBCPKGGPGD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBCPKGGPGD_DECMGICKDLH_OFFSET))(this);
	}
};
