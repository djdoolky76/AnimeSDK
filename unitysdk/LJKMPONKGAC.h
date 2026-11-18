#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLDLJJDFAHF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LJKMPONKGAC_ABMHJMAEMJF_OFFSET UNITYSDK_OFFSET(0x1AD5FFE0)
#define LJKMPONKGAC_AJFCEHGGLFM_OFFSET UNITYSDK_OFFSET(0x1AD60310)
#define LJKMPONKGAC_BFBEIJFBBEF_OFFSET UNITYSDK_OFFSET(0x1AD60420)
#define LJKMPONKGAC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD60220)
#define LJKMPONKGAC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD60210)
#define LJKMPONKGAC_IJFLMPHLGNH_OFFSET UNITYSDK_OFFSET(0x1AD600F0)
#define LJKMPONKGAC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD60200)
#define LJKMPONKGAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5FFD0)

inline static constexpr unsigned int LJKMPONKGAC_TypeDefinitionIndex = 16038;

class LJKMPONKGAC : public ::System::Object
{
public:
	::System::String* JMBJDDMIAEC; // 0x10
	::NLDLJJDFAHF HBDPAIKANDB; // 0x18
	::System::String* BHHLEEJPKKJ; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* DPCIFPIBAJA; // 0x38
	::System::String* NODJJICIPGB; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::NLDLJJDFAHF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NLDLJJDFAHF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LJKMPONKGAC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ABMHJMAEMJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKMPONKGAC_ABMHJMAEMJF_OFFSET))(this);
	}

	::System::String* IJFLMPHLGNH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKMPONKGAC_IJFLMPHLGNH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKMPONKGAC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJKMPONKGAC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKMPONKGAC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AJFCEHGGLFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKMPONKGAC_AJFCEHGGLFM_OFFSET))(this);
	}

	::System::String* BFBEIJFBBEF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKMPONKGAC_BFBEIJFBBEF_OFFSET))(this);
	}
};
