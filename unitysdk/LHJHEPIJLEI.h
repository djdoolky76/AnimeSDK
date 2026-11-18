#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPENFPIAOON.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LHJHEPIJLEI_CGLBNMFNKPE_OFFSET UNITYSDK_OFFSET(0x190FB860)
#define LHJHEPIJLEI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x190FBBD0)
#define LHJHEPIJLEI_FADPBKFIBDD_OFFSET UNITYSDK_OFFSET(0x190FBAB0)
#define LHJHEPIJLEI_FFKADBLGHEO_OFFSET UNITYSDK_OFFSET(0x190FB9A0)
#define LHJHEPIJLEI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x190FBBC0)
#define LHJHEPIJLEI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x190FBCC0)
#define LHJHEPIJLEI_OFOFEICBBBN_OFFSET UNITYSDK_OFFSET(0x190FB5E0)
#define LHJHEPIJLEI_OMBBDJDMGEC_OFFSET UNITYSDK_OFFSET(0x190FB720)
#define LHJHEPIJLEI_PMBCAKACFJP_OFFSET UNITYSDK_OFFSET(0x190FB4D0)
#define LHJHEPIJLEI__CTOR_OFFSET UNITYSDK_OFFSET(0x190FB4C0)

inline static constexpr unsigned int LHJHEPIJLEI_TypeDefinitionIndex = 11398;

class LHJHEPIJLEI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BHMOGLIOECA; // 0x18
	::JPENFPIAOON HBDPAIKANDB; // 0x20
	::System::String* IMAFCDDJOME; // 0x30
	::System::String* IPAJFAJOIMD; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 GCJODFNDDAK; // 0x44
	::System::Int32 JCBLGAEENBO; // 0x48
	::System::Int32 OODFEMOKODI; // 0x4C

	::System::Void _ctor(::JPENFPIAOON LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JPENFPIAOON, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LHJHEPIJLEI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PMBCAKACFJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_PMBCAKACFJP_OFFSET))(this);
	}

	::System::Int32 OFOFEICBBBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_OFOFEICBBBN_OFFSET))(this);
	}

	::System::Int32 OMBBDJDMGEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_OMBBDJDMGEC_OFFSET))(this);
	}

	::System::Int32 CGLBNMFNKPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_CGLBNMFNKPE_OFFSET))(this);
	}

	::System::String* FFKADBLGHEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_FFKADBLGHEO_OFFSET))(this);
	}

	::System::String* FADPBKFIBDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_FADPBKFIBDD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJHEPIJLEI_LJANCIBECFG_OFFSET))(this);
	}
};
