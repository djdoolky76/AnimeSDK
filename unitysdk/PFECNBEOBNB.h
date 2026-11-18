#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/KHKNDJCMOMH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFECNBEOBNB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C1A8F80)
#define PFECNBEOBNB_ELIGDBMAONC_OFFSET UNITYSDK_OFFSET(0x1C1A8CD0)
#define PFECNBEOBNB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C1A8CC0)
#define PFECNBEOBNB_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1C1A9070)
#define PFECNBEOBNB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C1A8CB0)
#define PFECNBEOBNB_OBBLGGIPDAM_OFFSET UNITYSDK_OFFSET(0x1C1A8E30)
#define PFECNBEOBNB_PMJJFGKOOFF_OFFSET UNITYSDK_OFFSET(0x1C1A8B70)
#define PFECNBEOBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A8B60)

inline static constexpr unsigned int PFECNBEOBNB_TypeDefinitionIndex = 17695;

class PFECNBEOBNB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KHKNDJCMOMH HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* OKBBGPGIODD; // 0x28
	::Foundation::AssetPath DOKBLJGJEID; // 0x30
	::System::String* OLADMDNPLFP; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Int32 BDECBJPNKEB; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52
	::System::Byte _padding0[0x5];
	::System::UInt64 DBECLNPKCAG; // 0x58

	::System::Void _ctor(::KHKNDJCMOMH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KHKNDJCMOMH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PFECNBEOBNB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PMJJFGKOOFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECNBEOBNB_PMJJFGKOOFF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECNBEOBNB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFECNBEOBNB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::AssetPath ELIGDBMAONC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECNBEOBNB_ELIGDBMAONC_OFFSET))(this);
	}

	::System::UInt64 OBBLGGIPDAM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECNBEOBNB_OBBLGGIPDAM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECNBEOBNB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GKAMCMIJFHJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFECNBEOBNB_GKAMCMIJFHJ_OFFSET))(this);
	}
};
