#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIDIJONEKIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEELEPGKKPJ_CAGHGJPOMNL_OFFSET UNITYSDK_OFFSET(0x18E05650)
#define MEELEPGKKPJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E05790)
#define MEELEPGKKPJ_FENENGEMOFG_OFFSET UNITYSDK_OFFSET(0x18E05880)
#define MEELEPGKKPJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E05B60)
#define MEELEPGKKPJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E05B50)
#define MEELEPGKKPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18E05640)

inline static constexpr unsigned int MEELEPGKKPJ_TypeDefinitionIndex = 9399;

class MEELEPGKKPJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BLAIDFNECKO; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JIDIJONEKIN HBDPAIKANDB; // 0x20
	::System::Int32 NKFBDOFCDEA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::JIDIJONEKIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JIDIJONEKIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MEELEPGKKPJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CAGHGJPOMNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEELEPGKKPJ_CAGHGJPOMNL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEELEPGKKPJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FENENGEMOFG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEELEPGKKPJ_FENENGEMOFG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEELEPGKKPJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEELEPGKKPJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
