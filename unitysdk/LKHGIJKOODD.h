#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJLNBLHPFBF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LKHGIJKOODD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FB4720)
#define LKHGIJKOODD_ECOGIKIPFLB_OFFSET UNITYSDK_OFFSET(0x17FB4610)
#define LKHGIJKOODD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FB45F0)
#define LKHGIJKOODD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FB4600)
#define LKHGIJKOODD__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB45E0)

inline static constexpr unsigned int LKHGIJKOODD_TypeDefinitionIndex = 14835;

class LKHGIJKOODD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PJLNBLHPFBF HBDPAIKANDB; // 0x18
	::System::String* OMDMEJBNGBG; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::PJLNBLHPFBF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PJLNBLHPFBF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LKHGIJKOODD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKHGIJKOODD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIJKOODD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ECOGIKIPFLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIJKOODD_ECOGIKIPFLB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIJKOODD_COFGIJJOFLP_OFFSET))(this);
	}
};
