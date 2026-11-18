#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANMCFGOEHJB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DJEPNFPAMOJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1950D100)
#define DJEPNFPAMOJ_EPICNCHKFHN_OFFSET UNITYSDK_OFFSET(0x1950CEA0)
#define DJEPNFPAMOJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1950D0F0)
#define DJEPNFPAMOJ_HAPFDNEPECI_OFFSET UNITYSDK_OFFSET(0x1950CC50)
#define DJEPNFPAMOJ_HDMFECNJEKO_OFFSET UNITYSDK_OFFSET(0x1950CFE0)
#define DJEPNFPAMOJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1950D1F0)
#define DJEPNFPAMOJ_OALENKANHBL_OFFSET UNITYSDK_OFFSET(0x1950CD90)
#define DJEPNFPAMOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1950CC40)

inline static constexpr unsigned int DJEPNFPAMOJ_TypeDefinitionIndex = 16063;

class DJEPNFPAMOJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::ANMCFGOEHJB HBDPAIKANDB; // 0x18
	::System::String* MGGDEHGEKII; // 0x28
	::System::String* EDCAMAKMHLH; // 0x30
	::System::Int32 AEAHFJEEJND; // 0x38
	::System::Int32 AEFJFJMGOFM; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 LKACABCBLDL; // 0x44

	::System::Void _ctor(::ANMCFGOEHJB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ANMCFGOEHJB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HAPFDNEPECI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_HAPFDNEPECI_OFFSET))(this);
	}

	::System::String* OALENKANHBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_OALENKANHBL_OFFSET))(this);
	}

	::System::Int32 EPICNCHKFHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_EPICNCHKFHN_OFFSET))(this);
	}

	::System::String* HDMFECNJEKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_HDMFECNJEKO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEPNFPAMOJ_LJANCIBECFG_OFFSET))(this);
	}
};
