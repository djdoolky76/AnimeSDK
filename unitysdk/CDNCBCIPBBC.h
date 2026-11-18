#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAFLMGCIALM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CDNCBCIPBBC_BDKJBCLIFFO_OFFSET UNITYSDK_OFFSET(0x1ADB8860)
#define CDNCBCIPBBC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1ADB82F0)
#define CDNCBCIPBBC_CIPKJBBAGEE_OFFSET UNITYSDK_OFFSET(0x1ADB8540)
#define CDNCBCIPBBC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADB8660)
#define CDNCBCIPBBC_DEDNHGJHKDI_OFFSET UNITYSDK_OFFSET(0x1ADB8430)
#define CDNCBCIPBBC_DGMILDLAEED_OFFSET UNITYSDK_OFFSET(0x1ADB8750)
#define CDNCBCIPBBC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADB8650)
#define CDNCBCIPBBC_HIPPPKMJPEN_OFFSET UNITYSDK_OFFSET(0x1ADB8970)
#define CDNCBCIPBBC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADB8AB0)
#define CDNCBCIPBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB82E0)

inline static constexpr unsigned int CDNCBCIPBBC_TypeDefinitionIndex = 14304;

class CDNCBCIPBBC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* ALEHEMJCJMH; // 0x18
	::MAFLMGCIALM HBDPAIKANDB; // 0x20
	::System::String* LPGAEMFNGGJ; // 0x30
	::System::String* MKDBLPHOLOE; // 0x38
	::System::String* KHCBIFOAKCP; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 NLCDENLKOPM; // 0x4C
	::System::Int32 CNGECNKONBN; // 0x50

	::System::Void _ctor(::MAFLMGCIALM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MAFLMGCIALM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CDNCBCIPBBC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* DEDNHGJHKDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_DEDNHGJHKDI_OFFSET))(this);
	}

	::System::String* CIPKJBBAGEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_CIPKJBBAGEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DGMILDLAEED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_DGMILDLAEED_OFFSET))(this);
	}

	::System::String* BDKJBCLIFFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_BDKJBCLIFFO_OFFSET))(this);
	}

	::System::Int32 HIPPPKMJPEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_HIPPPKMJPEN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNCBCIPBBC_LJANCIBECFG_OFFSET))(this);
	}
};
