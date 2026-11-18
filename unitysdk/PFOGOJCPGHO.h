#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PINADEBBEKC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFOGOJCPGHO_BGMMMONENAE_OFFSET UNITYSDK_OFFSET(0x1EDBEA30)
#define PFOGOJCPGHO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1EDBED10)
#define PFOGOJCPGHO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1EDBEF40)
#define PFOGOJCPGHO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1EDBED00)
#define PFOGOJCPGHO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1EDBEE00)
#define PFOGOJCPGHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBEA20)

inline static constexpr unsigned int PFOGOJCPGHO_TypeDefinitionIndex = 11071;

class PFOGOJCPGHO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MGHHFONJHHH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::PINADEBBEKC HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::PINADEBBEKC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PINADEBBEKC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PFOGOJCPGHO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BGMMMONENAE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOGOJCPGHO_BGMMMONENAE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOGOJCPGHO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOGOJCPGHO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOGOJCPGHO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFOGOJCPGHO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
