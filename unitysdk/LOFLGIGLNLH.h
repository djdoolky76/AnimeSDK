#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCIBBLHEPPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LOFLGIGLNLH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B30CC90)
#define LOFLGIGLNLH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B30CD90)
#define LOFLGIGLNLH_GJLKDCGGMPN_OFFSET UNITYSDK_OFFSET(0x1B30CB80)
#define LOFLGIGLNLH_IFKNCPALBFH_OFFSET UNITYSDK_OFFSET(0x1B30CA20)
#define LOFLGIGLNLH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B30CD80)
#define LOFLGIGLNLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30CA10)

inline static constexpr unsigned int LOFLGIGLNLH_TypeDefinitionIndex = 13243;

class LOFLGIGLNLH : public ::System::Object
{
public:
	::System::String* GNBLHCFBIBE; // 0x10
	::MCIBBLHEPPE HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean BIDECDAMMMJ; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte ACIOBDEBDNK; // 0x33

	::System::Void _ctor(::MCIBBLHEPPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MCIBBLHEPPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LOFLGIGLNLH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean IFKNCPALBFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFLGIGLNLH_IFKNCPALBFH_OFFSET))(this);
	}

	::System::String* GJLKDCGGMPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFLGIGLNLH_GJLKDCGGMPN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFLGIGLNLH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFLGIGLNLH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOFLGIGLNLH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
