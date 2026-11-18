#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCOJLHAGOFK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PJCGFLHBCLJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EE04250)
#define PJCGFLHBCLJ_EOPOMHDCLHN_OFFSET UNITYSDK_OFFSET(0x1EE04340)
#define PJCGFLHBCLJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EE046E0)
#define PJCGFLHBCLJ_IDKDMBDGHDN_OFFSET UNITYSDK_OFFSET(0x1EE045D0)
#define PJCGFLHBCLJ_KHLGPECGFIK_OFFSET UNITYSDK_OFFSET(0x1EE04480)
#define PJCGFLHBCLJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EE045C0)
#define PJCGFLHBCLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE04240)

inline static constexpr unsigned int PJCGFLHBCLJ_TypeDefinitionIndex = 16159;

class PJCGFLHBCLJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IAJDJCJNBBG; // 0x18
	::PCOJLHAGOFK HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 DMGJCBOAFIO; // 0x34
	::System::Int32 BIKLBNLEKLK; // 0x38

	::System::Void _ctor(::PCOJLHAGOFK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PCOJLHAGOFK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 EOPOMHDCLHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ_EOPOMHDCLHN_OFFSET))(this);
	}

	::System::Int32 KHLGPECGFIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ_KHLGPECGFIK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IDKDMBDGHDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ_IDKDMBDGHDN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJCGFLHBCLJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
