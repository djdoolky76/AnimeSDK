#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDACPCOCLEL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DHIIMHMMEJF_BDLDDEKIBOE_OFFSET UNITYSDK_OFFSET(0x19F39D60)
#define DHIIMHMMEJF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F39E70)
#define DHIIMHMMEJF_EHFELDEPJAO_OFFSET UNITYSDK_OFFSET(0x19F39C40)
#define DHIIMHMMEJF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F39C30)
#define DHIIMHMMEJF_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x19F39AF0)
#define DHIIMHMMEJF_GODCEMFDICH_OFFSET UNITYSDK_OFFSET(0x19F39F60)
#define DHIIMHMMEJF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F39D50)
#define DHIIMHMMEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x19F39AE0)

inline static constexpr unsigned int DHIIMHMMEJF_TypeDefinitionIndex = 9568;

class DHIIMHMMEJF : public ::System::Object
{
public:
	::FDACPCOCLEL HBDPAIKANDB; // 0x10
	::System::String* FLBKEPMHKFK; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* DOAKPIAFMDD; // 0x30
	::System::String* KLCMDBBNOEO; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x44

	::System::Void _ctor(::FDACPCOCLEL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDACPCOCLEL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DHIIMHMMEJF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EHFELDEPJAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_EHFELDEPJAO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* BDLDDEKIBOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_BDLDDEKIBOE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GODCEMFDICH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIIMHMMEJF_GODCEMFDICH_OFFSET))(this);
	}
};
