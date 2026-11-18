#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOHCLCHMKM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNKCPNJEODN_BNPNICOFANL_OFFSET UNITYSDK_OFFSET(0x1EE0A160)
#define PNKCPNJEODN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EE0A6C0)
#define PNKCPNJEODN_DOKFAOEOEFP_OFFSET UNITYSDK_OFFSET(0x1EE0A7B0)
#define PNKCPNJEODN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EE0A570)
#define PNKCPNJEODN_JNAPIIJFCPL_OFFSET UNITYSDK_OFFSET(0x1EE0A2A0)
#define PNKCPNJEODN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EE0A150)
#define PNKCPNJEODN_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x1EE0A580)
#define PNKCPNJEODN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0A140)

inline static constexpr unsigned int PNKCPNJEODN_TypeDefinitionIndex = 17157;

class PNKCPNJEODN : public ::System::Object
{
public:
	::NEOHCLCHMKM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* DHAKKACPCCC; // 0x28
	::System::Int32 HELPPNGKKNG; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 AFPOMJCODLL; // 0x38
	::System::Int32 FDLMOBIFOLL; // 0x3C

	::System::Void _ctor(::NEOHCLCHMKM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NEOHCLCHMKM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PNKCPNJEODN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKCPNJEODN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BNPNICOFANL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKCPNJEODN_BNPNICOFANL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JNAPIIJFCPL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKCPNJEODN_JNAPIIJFCPL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKCPNJEODN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKCPNJEODN_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKCPNJEODN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DOKFAOEOEFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKCPNJEODN_DOKFAOEOEFP_OFFSET))(this);
	}
};
