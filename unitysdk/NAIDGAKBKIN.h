#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_FOBIKPLLGLE.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAIDGAKBKIN_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x18C484C0)
#define NAIDGAKBKIN_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x18C485B0)
#define NAIDGAKBKIN_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x18C482C0)
#define NAIDGAKBKIN_GKOGFANAKCI_OFFSET UNITYSDK_OFFSET(0x18C481B0)
#define NAIDGAKBKIN_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x18C48510)
#define NAIDGAKBKIN_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x18C48680)
#define NAIDGAKBKIN_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x18C487A0)
#define NAIDGAKBKIN_PJNNHIHDLIH_OFFSET UNITYSDK_OFFSET(0x18C48220)
#define NAIDGAKBKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18C481C0)

inline static constexpr unsigned int NAIDGAKBKIN_TypeDefinitionIndex = 82687;

class NAIDGAKBKIN : public ::CLFBLCIJPKD_FOBIKPLLGLE
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt16>* _KAJNLMACGEN_k__BackingField; // 0x28
	::System::Int32 PBPHNNGJJGG; // 0x30

	::System::Void _ctor(::System::Int32 LNFMOIFKNKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAIDGAKBKIN__CTOR_OFFSET))(this, LNFMOIFKNKN);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt16>* GKOGFANAKCI()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_GKOGFANAKCI_OFFSET))(this);
	}

	::System::Void PJNNHIHDLIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_PJNNHIHDLIH_OFFSET))(this);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIDGAKBKIN_KJOHEMDIHNJ_OFFSET))(this);
	}
};
