#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNAKIMIMIJK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCAJAMKLBPL_CKFLOKCKPBO_OFFSET UNITYSDK_OFFSET(0x18BDFE50)
#define LCAJAMKLBPL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BDFC00)
#define LCAJAMKLBPL_ENGHFFDDLCA_OFFSET UNITYSDK_OFFSET(0x18BDFD00)
#define LCAJAMKLBPL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BDFCF0)
#define LCAJAMKLBPL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BDFE40)
#define LCAJAMKLBPL__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDFBF0)

inline static constexpr unsigned int LCAJAMKLBPL_TypeDefinitionIndex = 13905;

class LCAJAMKLBPL : public ::System::Object
{
public:
	::DNAKIMIMIJK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* PFNAKDLCOOC; // 0x28
	::System::Int32 EPNOLLHGOFJ; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::DNAKIMIMIJK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DNAKIMIMIJK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCAJAMKLBPL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAJAMKLBPL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCAJAMKLBPL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ENGHFFDDLCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAJAMKLBPL_ENGHFFDDLCA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAJAMKLBPL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CKFLOKCKPBO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAJAMKLBPL_CKFLOKCKPBO_OFFSET))(this);
	}
};
