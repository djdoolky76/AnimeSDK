#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INJJNCEMDEO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKKNAKLHLLN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1775F720)
#define BKKNAKLHLLN_FKDADFNFIIE_OFFSET UNITYSDK_OFFSET(0x1775F810)
#define BKKNAKLHLLN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1775FAE0)
#define BKKNAKLHLLN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1775FC30)
#define BKKNAKLHLLN_LJKOBMGLFLO_OFFSET UNITYSDK_OFFSET(0x1775FC40)
#define BKKNAKLHLLN_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x1775FAF0)
#define BKKNAKLHLLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1775F710)

inline static constexpr unsigned int BKKNAKLHLLN_TypeDefinitionIndex = 15925;

class BKKNAKLHLLN : public ::System::Object
{
public:
	::INJJNCEMDEO HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BMGFIKALJNM; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CBNOIHEFPPB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 OIKCPMJLMGI; // 0x40

	::System::Void _ctor(::INJJNCEMDEO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INJJNCEMDEO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BKKNAKLHLLN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKNAKLHLLN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FKDADFNFIIE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKNAKLHLLN_FKDADFNFIIE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKKNAKLHLLN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKNAKLHLLN_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKNAKLHLLN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LJKOBMGLFLO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKNAKLHLLN_LJKOBMGLFLO_OFFSET))(this);
	}
};
