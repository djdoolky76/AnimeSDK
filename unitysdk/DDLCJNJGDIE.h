#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNKAJOAEKKL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDLCJNJGDIE_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x1A54FC00)
#define DDLCJNJGDIE_BHBDIHLBAAG_OFFSET UNITYSDK_OFFSET(0x1A54FE40)
#define DDLCJNJGDIE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A54F9D0)
#define DDLCJNJGDIE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A54FD10)
#define DDLCJNJGDIE_JGHPPIFOLGP_OFFSET UNITYSDK_OFFSET(0x1A54FD30)
#define DDLCJNJGDIE_KLPAMPAHMAB_OFFSET UNITYSDK_OFFSET(0x1A54F890)
#define DDLCJNJGDIE_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x1A54FAC0)
#define DDLCJNJGDIE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A54FD20)
#define DDLCJNJGDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54F880)

inline static constexpr unsigned int DDLCJNJGDIE_TypeDefinitionIndex = 11961;

class DDLCJNJGDIE : public ::System::Object
{
public:
	::System::String* NPFIPILNLBF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* OHELPLMPPFE; // 0x20
	::HNKAJOAEKKL HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* NFKGMLNIHED; // 0x38
	::System::Int32 CKALBMAMAKP; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 ODHJIPIEMKO; // 0x48

	::System::Void _ctor(::HNKAJOAEKKL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HNKAJOAEKKL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDLCJNJGDIE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KLPAMPAHMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_KLPAMPAHMAB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_LFGIDEIHCID_OFFSET))(this);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_BELMIKIMNBG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JGHPPIFOLGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_JGHPPIFOLGP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BHBDIHLBAAG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLCJNJGDIE_BHBDIHLBAAG_OFFSET))(this);
	}
};
