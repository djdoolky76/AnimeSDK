#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGCDDJFLNN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NKECOAGLOMB_AGHCKEHGJJH_OFFSET UNITYSDK_OFFSET(0x1AB17FE0)
#define NKECOAGLOMB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB18230)
#define NKECOAGLOMB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB17FD0)
#define NKECOAGLOMB_GJPODGGEGAA_OFFSET UNITYSDK_OFFSET(0x1AB17DA0)
#define NKECOAGLOMB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB17EB0)
#define NKECOAGLOMB_NBJDGHJFDNI_OFFSET UNITYSDK_OFFSET(0x1AB17EC0)
#define NKECOAGLOMB_NHPIHMFFIIN_OFFSET UNITYSDK_OFFSET(0x1AB180F0)
#define NKECOAGLOMB_NPCJAIPNDJE_OFFSET UNITYSDK_OFFSET(0x1AB18430)
#define NKECOAGLOMB_PHCMILKCEMH_OFFSET UNITYSDK_OFFSET(0x1AB18320)
#define NKECOAGLOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB17D90)

inline static constexpr unsigned int NKECOAGLOMB_TypeDefinitionIndex = 12708;

class NKECOAGLOMB : public ::System::Object
{
public:
	::MIGCDDJFLNN HBDPAIKANDB; // 0x10
	::System::String* GJKDHHDHPNN; // 0x20
	::System::String* IOOCPIEKHNN; // 0x28
	::System::String* CFGFPPHEDEH; // 0x30
	::System::String* FMBBCNJNOLB; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::String* CJBACALFLBJ; // 0x48
	::System::Int32 FIMOIIKNFKG; // 0x50
	::System::Byte CNIAANMNOCF; // 0x54
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x55
	::System::Byte ACIOBDEBDNK; // 0x56

	::System::Void _ctor(::MIGCDDJFLNN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MIGCDDJFLNN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NKECOAGLOMB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GJPODGGEGAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_GJPODGGEGAA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NBJDGHJFDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_NBJDGHJFDNI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKECOAGLOMB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* AGHCKEHGJJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_AGHCKEHGJJH_OFFSET))(this);
	}

	::System::Int32 NHPIHMFFIIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_NHPIHMFFIIN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* PHCMILKCEMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_PHCMILKCEMH_OFFSET))(this);
	}

	::System::String* NPCJAIPNDJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKECOAGLOMB_NPCJAIPNDJE_OFFSET))(this);
	}
};
