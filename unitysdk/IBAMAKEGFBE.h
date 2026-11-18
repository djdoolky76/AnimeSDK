#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKMNAKGKFPC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBAMAKEGFBE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B883A20)
#define IBAMAKEGFBE_DMLEINIBFMD_OFFSET UNITYSDK_OFFSET(0x1B8838E0)
#define IBAMAKEGFBE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B883B10)
#define IBAMAKEGFBE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B883F30)
#define IBAMAKEGFBE_NAFHMLANJJE_OFFSET UNITYSDK_OFFSET(0x1B883DF0)
#define IBAMAKEGFBE_NJHJDCOLACK_OFFSET UNITYSDK_OFFSET(0x1B884050)
#define IBAMAKEGFBE_ODPEOBKOFDP_OFFSET UNITYSDK_OFFSET(0x1B883F40)
#define IBAMAKEGFBE_PMOOJDLOOAG_OFFSET UNITYSDK_OFFSET(0x1B883B20)
#define IBAMAKEGFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8838D0)

inline static constexpr unsigned int IBAMAKEGFBE_TypeDefinitionIndex = 15902;

class IBAMAKEGFBE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* KCJMBODPLHO; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MBJNBALMMLG; // 0x20
	::IKMNAKGKFPC HBDPAIKANDB; // 0x28
	::System::String* IKIEKIDAECG; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* MDEJEIBKJLA; // 0x40
	::System::Int32 ACGGFCBEEGL; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Byte ACIOBDEBDNK; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 GHMFFJJBFFM; // 0x50

	::System::Void _ctor(::IKMNAKGKFPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IKMNAKGKFPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBAMAKEGFBE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DMLEINIBFMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_DMLEINIBFMD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PMOOJDLOOAG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_PMOOJDLOOAG_OFFSET))(this);
	}

	::System::Int32 NAFHMLANJJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_NAFHMLANJJE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ODPEOBKOFDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_ODPEOBKOFDP_OFFSET))(this);
	}

	::System::String* NJHJDCOLACK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAMAKEGFBE_NJHJDCOLACK_OFFSET))(this);
	}
};
