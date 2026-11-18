#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKKPCOPJBAM_AAHILACGMBO_OFFSET UNITYSDK_OFFSET(0x149B4770)
#define DKKPCOPJBAM_BMBMAOFFACA_OFFSET UNITYSDK_OFFSET(0x149B4780)
#define DKKPCOPJBAM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x149B4030)
#define DKKPCOPJBAM_FAPJEACDLKO_OFFSET UNITYSDK_OFFSET(0x149B4020)
#define DKKPCOPJBAM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x149B3F90)
#define DKKPCOPJBAM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x149B3F00)
#define DKKPCOPJBAM_MJACCNABAKP_OFFSET UNITYSDK_OFFSET(0x149B4340)
#define DKKPCOPJBAM_NDALMNJEMND_OFFSET UNITYSDK_OFFSET(0x149B4350)
#define DKKPCOPJBAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x149B3E80)
#define DKKPCOPJBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x149B3EF0)

inline static constexpr unsigned int DKKPCOPJBAM_TypeDefinitionIndex = 79451;

class DKKPCOPJBAM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x146; // 0x0
	::System::Int32 _DMNKMFGJFOH_k__BackingField; // 0x20
	::System::Int32 _AKEBMKLCGCG_k__BackingField; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKPCOPJBAM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKPCOPJBAM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void FAPJEACDLKO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_FAPJEACDLKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* NFBIEEPHGFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_CNHBDOMKKDE_OFFSET))(this, NFBIEEPHGFB);
	}

	::System::Int32 MJACCNABAKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_MJACCNABAKP_OFFSET))(this);
	}

	::System::Void NDALMNJEMND(::System::Int32 NJBALIKDOCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_NDALMNJEMND_OFFSET))(this, NJBALIKDOCA);
	}

	::System::Int32 AAHILACGMBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_AAHILACGMBO_OFFSET))(this);
	}

	::System::Void BMBMAOFFACA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKKPCOPJBAM_BMBMAOFFACA_OFFSET))(this, EGEGIMGMJHN);
	}
};
