#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEHNAMHCHOK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APKNBIMCOME_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A74590)
#define APKNBIMCOME_FNCKEEDJDEO_OFFSET UNITYSDK_OFFSET(0x17A74310)
#define APKNBIMCOME_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A74570)
#define APKNBIMCOME_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17A741D0)
#define APKNBIMCOME_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A74580)
#define APKNBIMCOME__CTOR_OFFSET UNITYSDK_OFFSET(0x17A741C0)

inline static constexpr unsigned int APKNBIMCOME_TypeDefinitionIndex = 10946;

class APKNBIMCOME : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MEHNAMHCHOK HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* BPEMAGGGFDL; // 0x28
	::System::Int32 OKBBGPGIODD; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::MEHNAMHCHOK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MEHNAMHCHOK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APKNBIMCOME__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKNBIMCOME_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FNCKEEDJDEO()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKNBIMCOME_FNCKEEDJDEO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APKNBIMCOME_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKNBIMCOME_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKNBIMCOME_COFGIJJOFLP_OFFSET))(this);
	}
};
