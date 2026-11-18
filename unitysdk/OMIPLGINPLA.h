#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHIEPHBKMKH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OMIPLGINPLA_AINFFBBELLA_OFFSET UNITYSDK_OFFSET(0x1D0D5A50)
#define OMIPLGINPLA_CIKGGPBDAFN_OFFSET UNITYSDK_OFFSET(0x1D0D5DF0)
#define OMIPLGINPLA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D5960)
#define OMIPLGINPLA_DALDLKICIIG_OFFSET UNITYSDK_OFFSET(0x1D0D5B90)
#define OMIPLGINPLA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D5F00)
#define OMIPLGINPLA_HNLLCCFMEIJ_OFFSET UNITYSDK_OFFSET(0x1D0D5CB0)
#define OMIPLGINPLA_KBIMHNFKGOO_OFFSET UNITYSDK_OFFSET(0x1D0D5F10)
#define OMIPLGINPLA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D5CA0)
#define OMIPLGINPLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D5950)

inline static constexpr unsigned int OMIPLGINPLA_TypeDefinitionIndex = 10243;

class OMIPLGINPLA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JHIEPHBKMKH HBDPAIKANDB; // 0x18
	::System::String* FKMKCHAFOAD; // 0x28
	::System::String* PINLLFPEIDF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 BPOHPNOHOEF; // 0x3C
	::System::Int32 NKLINFFAGIL; // 0x40
	::System::Int32 PGJEHEEJBEI; // 0x44

	::System::Void _ctor(::JHIEPHBKMKH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHIEPHBKMKH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMIPLGINPLA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 AINFFBBELLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_AINFFBBELLA_OFFSET))(this);
	}

	::System::String* DALDLKICIIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_DALDLKICIIG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HNLLCCFMEIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_HNLLCCFMEIJ_OFFSET))(this);
	}

	::System::String* CIKGGPBDAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_CIKGGPBDAFN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMIPLGINPLA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KBIMHNFKGOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIPLGINPLA_KBIMHNFKGOO_OFFSET))(this);
	}
};
