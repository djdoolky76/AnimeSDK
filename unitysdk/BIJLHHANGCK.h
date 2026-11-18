#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIMPKLPMBNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BIJLHHANGCK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BEABA0)
#define BIJLHHANGCK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BEACA0)
#define BIJLHHANGCK_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x19BEAA90)
#define BIJLHHANGCK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BEAC90)
#define BIJLHHANGCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEAA80)

inline static constexpr unsigned int BIJLHHANGCK_TypeDefinitionIndex = 10184;

class BIJLHHANGCK : public ::System::Object
{
public:
	::DIMPKLPMBNM HBDPAIKANDB; // 0x10
	::System::String* HKKJIFGKKEH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::DIMPKLPMBNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIMPKLPMBNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIJLHHANGCK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJLHHANGCK_IFOHJNHGHBK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJLHHANGCK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJLHHANGCK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIJLHHANGCK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
