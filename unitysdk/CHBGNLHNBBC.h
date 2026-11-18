#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHAGPGAKPIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHBGNLHNBBC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F0D7C0)
#define CHBGNLHNBBC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F0D670)
#define CHBGNLHNBBC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F0D660)
#define CHBGNLHNBBC_LJGGLNDONFO_OFFSET UNITYSDK_OFFSET(0x17F0D8B0)
#define CHBGNLHNBBC_NPFADBMMIOA_OFFSET UNITYSDK_OFFSET(0x17F0D680)
#define CHBGNLHNBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0D650)

inline static constexpr unsigned int CHBGNLHNBBC_TypeDefinitionIndex = 12369;

class CHBGNLHNBBC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JHAGPGAKPIN HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* POBBNOICDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 OEPIEEKCAIE; // 0x34

	::System::Void _ctor(::JHAGPGAKPIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHAGPGAKPIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CHBGNLHNBBC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBGNLHNBBC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHBGNLHNBBC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NPFADBMMIOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBGNLHNBBC_NPFADBMMIOA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBGNLHNBBC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LJGGLNDONFO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBGNLHNBBC_LJGGLNDONFO_OFFSET))(this);
	}
};
