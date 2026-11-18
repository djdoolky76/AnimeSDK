#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFGPBPKINFJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POCGKEPEKBL_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x1F293D50)
#define POCGKEPEKBL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1F293B10)
#define POCGKEPEKBL_EPKHFGDILDG_OFFSET UNITYSDK_OFFSET(0x1F293720)
#define POCGKEPEKBL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1F293830)
#define POCGKEPEKBL_JLKNALIKFCB_OFFSET UNITYSDK_OFFSET(0x1F2935E0)
#define POCGKEPEKBL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1F293C00)
#define POCGKEPEKBL_MDMJEFBNFGM_OFFSET UNITYSDK_OFFSET(0x1F293840)
#define POCGKEPEKBL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1F293C10)
#define POCGKEPEKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2935D0)

inline static constexpr unsigned int POCGKEPEKBL_TypeDefinitionIndex = 11976;

class POCGKEPEKBL : public ::System::Object
{
public:
	::System::String* KGGHFIJGFDI; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::EFGPBPKINFJ HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* EIHEPCFLOOF; // 0x30
	::System::Int32 CEEBHOAKLFN; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 AAJLELJNOCJ; // 0x44

	::System::Void _ctor(::EFGPBPKINFJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFGPBPKINFJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + POCGKEPEKBL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JLKNALIKFCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_JLKNALIKFCB_OFFSET))(this);
	}

	::System::String* EPKHFGDILDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_EPKHFGDILDG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POCGKEPEKBL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MDMJEFBNFGM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_MDMJEFBNFGM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCGKEPEKBL_CNGFHHECIEL_OFFSET))(this);
	}
};
