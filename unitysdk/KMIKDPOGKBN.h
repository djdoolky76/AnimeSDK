#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJMGFIHFLCI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KMIKDPOGKBN_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x1BB07050)
#define KMIKDPOGKBN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB06E20)
#define KMIKDPOGKBN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB06AD0)
#define KMIKDPOGKBN_GDFMOBNOCFH_OFFSET UNITYSDK_OFFSET(0x1BB06F10)
#define KMIKDPOGKBN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB06D00)
#define KMIKDPOGKBN_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x1BB06BF0)
#define KMIKDPOGKBN_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x1BB06AE0)
#define KMIKDPOGKBN_OKHJNNEJKDG_OFFSET UNITYSDK_OFFSET(0x1BB06D10)
#define KMIKDPOGKBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB06AC0)

inline static constexpr unsigned int KMIKDPOGKBN_TypeDefinitionIndex = 15136;

class KMIKDPOGKBN : public ::System::Object
{
public:
	::System::String* EMDOKBMBFAB; // 0x10
	::System::String* DDCEOGKNPOI; // 0x18
	::System::String* NCOABBOBMHH; // 0x20
	::System::String* CJPFHJFDCFJ; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::PJMGFIHFLCI HBDPAIKANDB; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 JFPMNOFCLNH; // 0x4C

	::System::Void _ctor(::PJMGFIHFLCI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PJMGFIHFLCI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KMIKDPOGKBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* OKHJNNEJKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_OKHJNNEJKDG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GDFMOBNOCFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_GDFMOBNOCFH_OFFSET))(this);
	}

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKDPOGKBN_ADBBCNFGHPJ_OFFSET))(this);
	}
};
