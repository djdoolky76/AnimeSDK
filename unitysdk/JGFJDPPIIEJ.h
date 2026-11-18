#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKDKMGMJJJB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGFJDPPIIEJ_CIIOBKOLENI_OFFSET UNITYSDK_OFFSET(0x16115AF0)
#define JGFJDPPIIEJ_CNGNLDFCOEP_OFFSET UNITYSDK_OFFSET(0x16115C30)
#define JGFJDPPIIEJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x161159F0)
#define JGFJDPPIIEJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16115AE0)
#define JGFJDPPIIEJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16115F00)
#define JGFJDPPIIEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x161159E0)

inline static constexpr unsigned int JGFJDPPIIEJ_TypeDefinitionIndex = 11659;

class JGFJDPPIIEJ : public ::System::Object
{
public:
	::DKDKMGMJJJB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* FKCNGCBJAAA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 JMHKJDFEICB; // 0x34

	::System::Void _ctor(::DKDKMGMJJJB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DKDKMGMJJJB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JGFJDPPIIEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFJDPPIIEJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGFJDPPIIEJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CIIOBKOLENI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFJDPPIIEJ_CIIOBKOLENI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CNGNLDFCOEP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFJDPPIIEJ_CNGNLDFCOEP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFJDPPIIEJ_LJANCIBECFG_OFFSET))(this);
	}
};
