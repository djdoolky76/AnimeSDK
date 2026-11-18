#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNGBDJEOFKL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PKJABJIKMJN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAC7280)
#define PKJABJIKMJN_DEGIAPANKLK_OFFSET UNITYSDK_OFFSET(0x1BAC7370)
#define PKJABJIKMJN_DOBNMEIIMGO_OFFSET UNITYSDK_OFFSET(0x1BAC7040)
#define PKJABJIKMJN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAC7150)
#define PKJABJIKMJN_GJMFNIGGECE_OFFSET UNITYSDK_OFFSET(0x1BAC7160)
#define PKJABJIKMJN_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x1BAC6F00)
#define PKJABJIKMJN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAC7270)
#define PKJABJIKMJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC6EF0)

inline static constexpr unsigned int PKJABJIKMJN_TypeDefinitionIndex = 16239;

class PKJABJIKMJN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* GGBPNKOELAH; // 0x18
	::LNGBDJEOFKL HBDPAIKANDB; // 0x20
	::System::String* CICFMDAHIDH; // 0x30
	::System::String* GDLBNBIGIHP; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 OCGIOHPBCIK; // 0x48

	::System::Void _ctor(::LNGBDJEOFKL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNGBDJEOFKL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PKJABJIKMJN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJABJIKMJN_HJFCIELMJPA_OFFSET))(this);
	}

	::System::String* DOBNMEIIMGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJABJIKMJN_DOBNMEIIMGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKJABJIKMJN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GJMFNIGGECE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJABJIKMJN_GJMFNIGGECE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJABJIKMJN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJABJIKMJN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DEGIAPANKLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJABJIKMJN_DEGIAPANKLK_OFFSET))(this);
	}
};
