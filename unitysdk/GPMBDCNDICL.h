#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType.h"
#include "unitysdk/System/Object.h"

class GPMBDCNDICL_HCODFEFLIPN;
class GPMBDCNDICL_HFPIMKMCHDL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPMBDCNDICL_AHPLFFOHDEA_OFFSET UNITYSDK_OFFSET(0x17ADD9A0)
#define GPMBDCNDICL_BOKDNDOPDPG_OFFSET UNITYSDK_OFFSET(0x17ADDE60)
#define GPMBDCNDICL_FHDFJILNHIO_OFFSET UNITYSDK_OFFSET(0x17ADE030)
#define GPMBDCNDICL_GDMLPPHLLBC_OFFSET UNITYSDK_OFFSET(0x17ADDFA0)
#define GPMBDCNDICL_HFIKFEPHALA_OFFSET UNITYSDK_OFFSET(0x17ADDF80)
#define GPMBDCNDICL_PEDPANEECLN_OFFSET UNITYSDK_OFFSET(0x17ADD730)
#define GPMBDCNDICL__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD660)

inline static constexpr unsigned int GPMBDCNDICL_TypeDefinitionIndex = 76846;

class GPMBDCNDICL : public ::System::Object
{
public:
	// static const ::System::Int32 EBMOCOIDIMJ = 0x64; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* NDNGKAJEJOO; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* HJBOOHIOOFE; // 0x18
	::System::Int32 EIGLHIEOFIA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMBDCNDICL__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType PEDPANEECLN(::GPMBDCNDICL_HFPIMKMCHDL* DEKBKLELKBD, ::GPMBDCNDICL_HCODFEFLIPN*& BFKJGGNHAHK, ::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType ECGPODOOKDH, ::GPMBDCNDICL_HCODFEFLIPN*& CPKHPOGFEMF, ::System::Boolean BAHHEMEPPID)
	{
		return ((::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType(*)(::PVOID, ::GPMBDCNDICL_HFPIMKMCHDL*, ::GPMBDCNDICL_HCODFEFLIPN*&, ::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType, ::GPMBDCNDICL_HCODFEFLIPN*&, ::System::Boolean))((::PBYTE)hIl2Cpp + GPMBDCNDICL_PEDPANEECLN_OFFSET))(this, DEKBKLELKBD, BFKJGGNHAHK, ECGPODOOKDH, CPKHPOGFEMF, BAHHEMEPPID);
	}

	static ::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType AHPLFFOHDEA(::System::Collections::Generic::IEnumerable_1<::System::String*>* AJOEFNLFJCF)
	{
		return ((::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + GPMBDCNDICL_AHPLFFOHDEA_OFFSET))(AJOEFNLFJCF);
	}

	::System::Boolean BOKDNDOPDPG(::GPMBDCNDICL_HFPIMKMCHDL*& KLMCGCBGDLE)
	{
		return ((::System::Boolean(*)(::PVOID, ::GPMBDCNDICL_HFPIMKMCHDL*&))((::PBYTE)hIl2Cpp + GPMBDCNDICL_BOKDNDOPDPG_OFFSET))(this, KLMCGCBGDLE);
	}

	::System::Int32 HFIKFEPHALA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMBDCNDICL_HFIKFEPHALA_OFFSET))(this);
	}

	::System::Void GDMLPPHLLBC(::GPMBDCNDICL_HFPIMKMCHDL* KLMCGCBGDLE)
	{
		return ((::System::Void(*)(::PVOID, ::GPMBDCNDICL_HFPIMKMCHDL*))((::PBYTE)hIl2Cpp + GPMBDCNDICL_GDMLPPHLLBC_OFFSET))(this, KLMCGCBGDLE);
	}

	::System::Void FHDFJILNHIO(::GPMBDCNDICL_HCODFEFLIPN* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GPMBDCNDICL_HCODFEFLIPN*))((::PBYTE)hIl2Cpp + GPMBDCNDICL_FHDFJILNHIO_OFFSET))(this, LJBPECKCCEA);
	}
};
