#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGFHLMLLADH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJKOMCHPBIE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFFDAC0)
#define OJKOMCHPBIE_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1CFFDBC0)
#define OJKOMCHPBIE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFFDE90)
#define OJKOMCHPBIE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFFDBB0)
#define OJKOMCHPBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFDAB0)

inline static constexpr unsigned int OJKOMCHPBIE_TypeDefinitionIndex = 12994;

class OJKOMCHPBIE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* PCCPGAMLEMB; // 0x18
	::OGFHLMLLADH HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::OGFHLMLLADH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OGFHLMLLADH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OJKOMCHPBIE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKOMCHPBIE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKOMCHPBIE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIGNOOEDDNC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKOMCHPBIE_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJKOMCHPBIE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
