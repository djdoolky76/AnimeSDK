#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/OODNKFDCMPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EIJCLANEDII_ALNCMCCJEBI_OFFSET UNITYSDK_OFFSET(0x16629A20)
#define EIJCLANEDII_CNHOKELPBBD_OFFSET UNITYSDK_OFFSET(0x16629190)
#define EIJCLANEDII_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16629690)
#define EIJCLANEDII_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x166298C0)
#define EIJCLANEDII_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16629A10)
#define EIJCLANEDII_LJAJKEDFMML_OFFSET UNITYSDK_OFFSET(0x16629550)
#define EIJCLANEDII_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16629A00)
#define EIJCLANEDII_NEMPHEDBMBO_OFFSET UNITYSDK_OFFSET(0x166292A0)
#define EIJCLANEDII_OAOEEEDGABN_OFFSET UNITYSDK_OFFSET(0x166293F0)
#define EIJCLANEDII_OOHPMDCOIGL_OFFSET UNITYSDK_OFFSET(0x16629780)
#define EIJCLANEDII__CTOR_OFFSET UNITYSDK_OFFSET(0x16629180)

inline static constexpr unsigned int EIJCLANEDII_TypeDefinitionIndex = 11303;

class EIJCLANEDII : public ::System::Object
{
public:
	::System::String* JBMJGKGPEBC; // 0x10
	::Foundation::AssetPath AJANMGGAGFN; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* NMINPGGEJGG; // 0x30
	::OODNKFDCMPE HBDPAIKANDB; // 0x38
	::System::String* NCABKCIPBFD; // 0x48
	::System::UInt64 KDMOCKMFCJB; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x58
	::System::Byte CNIAANMNOCF; // 0x59
	::System::Byte ACIOBDEBDNK; // 0x5A
	::System::Byte _padding0[0x1];
	::System::Int32 FKBABFJDILG; // 0x5C
	::System::Int32 MNBNMLDLKCL; // 0x60
	::System::Int32 KKKCOKOIJJB; // 0x64

	::System::Void _ctor(::OODNKFDCMPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OODNKFDCMPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EIJCLANEDII__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CNHOKELPBBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_CNHOKELPBBD_OFFSET))(this);
	}

	::System::UInt64 NEMPHEDBMBO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_NEMPHEDBMBO_OFFSET))(this);
	}

	::Foundation::AssetPath OAOEEEDGABN()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_OAOEEEDGABN_OFFSET))(this);
	}

	::System::Int32 LJAJKEDFMML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_LJAJKEDFMML_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OOHPMDCOIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_OOHPMDCOIGL_OFFSET))(this);
	}

	::System::Int32 DCAMONJGNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_DCAMONJGNHG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIJCLANEDII_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ALNCMCCJEBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCLANEDII_ALNCMCCJEBI_OFFSET))(this);
	}
};
