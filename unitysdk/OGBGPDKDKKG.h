#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOJDCANNOG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGBGPDKDKKG_BFGBMDPLPCF_OFFSET UNITYSDK_OFFSET(0x1CFFA920)
#define OGBGPDKDKKG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFFA410)
#define OGBGPDKDKKG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFFA640)
#define OGBGPDKDKKG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFFAA60)
#define OGBGPDKDKKG_LKANJLOKKOO_OFFSET UNITYSDK_OFFSET(0x1CFFA650)
#define OGBGPDKDKKG_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x1CFFA500)
#define OGBGPDKDKKG_OGMAKCDKMDJ_OFFSET UNITYSDK_OFFSET(0x1CFFA300)
#define OGBGPDKDKKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFA2F0)

inline static constexpr unsigned int OGBGPDKDKKG_TypeDefinitionIndex = 16161;

class OGBGPDKDKKG : public ::System::Object
{
public:
	::System::String* KFGOAGMPBDG; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* GBCOJDMMOFC; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::KLOJDCANNOG HBDPAIKANDB; // 0x28
	::System::Int32 HDDMLDDOMFD; // 0x38
	::System::Int32 ILLFDIIBBBP; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::KLOJDCANNOG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLOJDCANNOG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGBGPDKDKKG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OGMAKCDKMDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_OGMAKCDKMDJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LKANJLOKKOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_LKANJLOKKOO_OFFSET))(this);
	}

	::System::Int32 BFGBMDPLPCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_BFGBMDPLPCF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBGPDKDKKG_LJANCIBECFG_OFFSET))(this);
	}
};
