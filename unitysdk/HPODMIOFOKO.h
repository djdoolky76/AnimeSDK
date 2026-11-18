#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MONCJMOCIEM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPODMIOFOKO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BB5270)
#define HPODMIOFOKO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BB4F90)
#define HPODMIOFOKO_LHCDCDOMCHC_OFFSET UNITYSDK_OFFSET(0x18BB4CC0)
#define HPODMIOFOKO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BB5360)
#define HPODMIOFOKO_PAHKAMLOLGI_OFFSET UNITYSDK_OFFSET(0x18BB4FA0)
#define HPODMIOFOKO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18BB5370)
#define HPODMIOFOKO__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB4CB0)

inline static constexpr unsigned int HPODMIOFOKO_TypeDefinitionIndex = 17736;

class HPODMIOFOKO : public ::System::Object
{
public:
	::MONCJMOCIEM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CGFFOBAFECF; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* MICIHLMHENE; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::MONCJMOCIEM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MONCJMOCIEM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPODMIOFOKO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LHCDCDOMCHC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODMIOFOKO_LHCDCDOMCHC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPODMIOFOKO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PAHKAMLOLGI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODMIOFOKO_PAHKAMLOLGI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODMIOFOKO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODMIOFOKO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODMIOFOKO_PPIFNHNGCGO_OFFSET))(this);
	}
};
