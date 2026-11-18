#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDPLLNPBIEO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCBEECHCNPO_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x1AB12950)
#define NCBEECHCNPO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB12860)
#define NCBEECHCNPO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB12D60)
#define NCBEECHCNPO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1AB12C20)
#define NCBEECHCNPO_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x1AB12590)
#define NCBEECHCNPO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB12EB0)
#define NCBEECHCNPO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1AB12D70)
#define NCBEECHCNPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB12580)

inline static constexpr unsigned int NCBEECHCNPO_TypeDefinitionIndex = 12483;

class NCBEECHCNPO : public ::System::Object
{
public:
	::FDPLLNPBIEO HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CDPMOEENODL; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OIBEAJNLJAB; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x40

	::System::Void _ctor(::FDPLLNPBIEO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDPLLNPBIEO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCBEECHCNPO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LFPFCAFBOEK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBEECHCNPO_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBEECHCNPO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BHMMKDGCLGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBEECHCNPO_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBEECHCNPO_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCBEECHCNPO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBEECHCNPO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBEECHCNPO_LJANCIBECFG_OFFSET))(this);
	}
};
