#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPLJHPELGFP_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x106023B0)
#define NPLJHPELGFP_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x10602650)
#define NPLJHPELGFP_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x106020F0)
#define NPLJHPELGFP_GKOGFANAKCI_OFFSET UNITYSDK_OFFSET(0x10602040)
#define NPLJHPELGFP_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x10602400)
#define NPLJHPELGFP_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x10602530)
#define NPLJHPELGFP_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x106024A0)
#define NPLJHPELGFP_PJNNHIHDLIH_OFFSET UNITYSDK_OFFSET(0x10602050)
#define NPLJHPELGFP__CTOR_OFFSET UNITYSDK_OFFSET(0x10601FE0)

inline static constexpr unsigned int NPLJHPELGFP_TypeDefinitionIndex = 88916;

class NPLJHPELGFP : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	::System::String* OINCIABOOLC; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt16>* _KAJNLMACGEN_k__BackingField; // 0x30

	::System::Void _ctor(::System::String* CPDGLJJGJDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPLJHPELGFP__CTOR_OFFSET))(this, CPDGLJJGJDL);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt16>* GKOGFANAKCI()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLJHPELGFP_GKOGFANAKCI_OFFSET))(this);
	}

	::System::Void PJNNHIHDLIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLJHPELGFP_PJNNHIHDLIH_OFFSET))(this);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPLJHPELGFP_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLJHPELGFP_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLJHPELGFP_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLJHPELGFP_KJOHEMDIHNJ_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLJHPELGFP_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPLJHPELGFP_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
