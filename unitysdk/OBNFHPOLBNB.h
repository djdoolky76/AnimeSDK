#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNODPPHMGGE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OBNFHPOLBNB_BEKPAPICPAM_OFFSET UNITYSDK_OFFSET(0x1D0CFFD0)
#define OBNFHPOLBNB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0CFED0)
#define OBNFHPOLBNB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0CFFC0)
#define OBNFHPOLBNB_JIAMCPIGBND_OFFSET UNITYSDK_OFFSET(0x1D0D0110)
#define OBNFHPOLBNB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0CFEC0)
#define OBNFHPOLBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CFEB0)

inline static constexpr unsigned int OBNFHPOLBNB_TypeDefinitionIndex = 16766;

class OBNFHPOLBNB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DNODPPHMGGE HBDPAIKANDB; // 0x18
	::System::String* FNFAGPGOOKI; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 BHCBLFAEKDM; // 0x34

	::System::Void _ctor(::DNODPPHMGGE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DNODPPHMGGE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OBNFHPOLBNB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNFHPOLBNB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNFHPOLBNB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBNFHPOLBNB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BEKPAPICPAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNFHPOLBNB_BEKPAPICPAM_OFFSET))(this);
	}

	::System::String* JIAMCPIGBND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNFHPOLBNB_JIAMCPIGBND_OFFSET))(this);
	}
};
