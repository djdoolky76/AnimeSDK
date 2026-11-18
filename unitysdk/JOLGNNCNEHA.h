#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLPBHLCBPGA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOLGNNCNEHA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A506710)
#define JOLGNNCNEHA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A506800)
#define JOLGNNCNEHA_HFKNBJCGIKA_OFFSET UNITYSDK_OFFSET(0x1A506190)
#define JOLGNNCNEHA_IPKDIBHOAHG_OFFSET UNITYSDK_OFFSET(0x1A506470)
#define JOLGNNCNEHA_KGFNFFALDKG_OFFSET UNITYSDK_OFFSET(0x1A5065B0)
#define JOLGNNCNEHA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A506460)
#define JOLGNNCNEHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A506180)

inline static constexpr unsigned int JOLGNNCNEHA_TypeDefinitionIndex = 13111;

class JOLGNNCNEHA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* IAEOIHAOJNC; // 0x18
	::DLPBHLCBPGA HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean OAOLHIAGBCB; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x33
	::System::Int32 KPKIJKLPLGM; // 0x34

	::System::Void _ctor(::DLPBHLCBPGA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DLPBHLCBPGA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JOLGNNCNEHA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HFKNBJCGIKA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGNNCNEHA_HFKNBJCGIKA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGNNCNEHA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IPKDIBHOAHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGNNCNEHA_IPKDIBHOAHG_OFFSET))(this);
	}

	::System::Boolean KGFNFFALDKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGNNCNEHA_KGFNFFALDKG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGNNCNEHA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOLGNNCNEHA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
