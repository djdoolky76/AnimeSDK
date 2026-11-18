#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDCJIGMGBFJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDOKPOBJGPL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B327A60)
#define NDOKPOBJGPL_EOIBDAINADK_OFFSET UNITYSDK_OFFSET(0x1B327C90)
#define NDOKPOBJGPL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B3274F0)
#define NDOKPOBJGPL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B327780)
#define NDOKPOBJGPL_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1B327500)
#define NDOKPOBJGPL_OCKCOMLNBLF_OFFSET UNITYSDK_OFFSET(0x1B327790)
#define NDOKPOBJGPL_ONHEBDDLMNO_OFFSET UNITYSDK_OFFSET(0x1B327640)
#define NDOKPOBJGPL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B327B50)
#define NDOKPOBJGPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3274E0)

inline static constexpr unsigned int NDOKPOBJGPL_TypeDefinitionIndex = 14979;

class NDOKPOBJGPL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MDCJIGMGBFJ HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* FLCIIKHKFJB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 JEDEMPHDCAK; // 0x34
	::System::Int32 EEEFFLKOOND; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 AEFOHKBBGDN; // 0x40

	::System::Void _ctor(::MDCJIGMGBFJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDCJIGMGBFJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NDOKPOBJGPL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 ONHEBDDLMNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_ONHEBDDLMNO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OCKCOMLNBLF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_OCKCOMLNBLF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 EOIBDAINADK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOKPOBJGPL_EOIBDAINADK_OFFSET))(this);
	}
};
