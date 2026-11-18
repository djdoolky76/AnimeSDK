#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_LOGGJKCPPEL.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NBNJMJGKOEO_MBIGMNPLLJA_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x120F2350)
#define NBNJMJGKOEO_MBIGMNPLLJA_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x120F26A0)
#define NBNJMJGKOEO_MBIGMNPLLJA_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x120F20E0)
#define NBNJMJGKOEO_MBIGMNPLLJA_GKOGFANAKCI_OFFSET UNITYSDK_OFFSET(0x120F2440)
#define NBNJMJGKOEO_MBIGMNPLLJA_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x120F23A0)
#define NBNJMJGKOEO_MBIGMNPLLJA_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x120F2580)
#define NBNJMJGKOEO_MBIGMNPLLJA_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x120F24F0)
#define NBNJMJGKOEO_MBIGMNPLLJA_PJNNHIHDLIH_OFFSET UNITYSDK_OFFSET(0x120F2450)
#define NBNJMJGKOEO_MBIGMNPLLJA__CTOR_OFFSET UNITYSDK_OFFSET(0x120F2080)

inline static constexpr unsigned int NBNJMJGKOEO_MBIGMNPLLJA_TypeDefinitionIndex = 68602;

class NBNJMJGKOEO_MBIGMNPLLJA : public ::CLFBLCIJPKD_LOGGJKCPPEL
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt16>* _KAJNLMACGEN_k__BackingField; // 0x30
	::MoleMole::Config::EntityType LGELBGOCLDA; // 0x38

	::System::Void _ctor(::System::String* DGICNFBPHAP, ::MoleMole::Config::EntityType HLOOHENLDFP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA__CTOR_OFFSET))(this, DGICNFBPHAP, HLOOHENLDFP);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt16>* GKOGFANAKCI()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_GKOGFANAKCI_OFFSET))(this);
	}

	::System::Void PJNNHIHDLIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_PJNNHIHDLIH_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_KJOHEMDIHNJ_OFFSET))(this);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_MBIGMNPLLJA_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
