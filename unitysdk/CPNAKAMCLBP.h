#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EEventState.h"

class HGGBGKKEBCC;
class JGPGPIFEMCI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPNAKAMCLBP_CCDCEBCMGGH_OFFSET UNITYSDK_OFFSET(0x12044780)
#define CPNAKAMCLBP_CDKHMNJEPBL_OFFSET UNITYSDK_OFFSET(0x1204EF20)
#define CPNAKAMCLBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1204C630)
#define CPNAKAMCLBP_EBJMOCFGEGN_OFFSET UNITYSDK_OFFSET(0x1204F510)
#define CPNAKAMCLBP_HHOHDAILGHA_OFFSET UNITYSDK_OFFSET(0x1204F220)
#define CPNAKAMCLBP_HICKHIAIDGI_OFFSET UNITYSDK_OFFSET(0x1204F830)
#define CPNAKAMCLBP_JLKFOOLFANP_OFFSET UNITYSDK_OFFSET(0x1204F470)
#define CPNAKAMCLBP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1204C670)
#define CPNAKAMCLBP_PEHIPGOEBDI_OFFSET UNITYSDK_OFFSET(0x1204C860)
#define CPNAKAMCLBP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1204F080)
#define CPNAKAMCLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1204C6B0)

inline static constexpr unsigned int CPNAKAMCLBP_TypeDefinitionIndex = 53631;

class CPNAKAMCLBP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::EEventState>*>*>* GPBKIHMOPFI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::HGGBGKKEBCC*>*>* MCMCJPAAGAJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* BPDBDEMLIBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNAKAMCLBP__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_ONCREATE_OFFSET))(this);
	}

	::System::Void PEHIPGOEBDI(::System::Int32 GNHEHOMMHPB, ::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* BAHEGBLKDAI, ::System::Collections::Generic::List_1<::System::UInt32>* IELBMCGOMPH, ::System::Boolean LGGDABJHMEG, ::System::Boolean IMLIEMDOCHK, ::System::Boolean KICJKHNMFLC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::JGPGPIFEMCI*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_PEHIPGOEBDI_OFFSET))(this, GNHEHOMMHPB, BAHEGBLKDAI, IELBMCGOMPH, LGGDABJHMEG, IMLIEMDOCHK, KICJKHNMFLC);
	}

	::HGGBGKKEBCC* CCDCEBCMGGH(::System::UInt64 ACHBBPJIBIE)
	{
		return ((::HGGBGKKEBCC*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_CCDCEBCMGGH_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::HGGBGKKEBCC*>* CDKHMNJEPBL(::System::Int32 HCCAMEGIEKP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::HGGBGKKEBCC*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_CDKHMNJEPBL_OFFSET))(this, HCCAMEGIEKP);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean HHOHDAILGHA(::System::UInt64 ACHBBPJIBIE, ::System::Int32 BCCENALHBHL, ::System::Int32 LNGLIOMMDAD, ::Share::EEventState& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32, ::Share::EEventState&))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_HHOHDAILGHA_OFFSET))(this, ACHBBPJIBIE, BCCENALHBHL, LNGLIOMMDAD, JKBLDFBGBPK);
	}

	::System::Int32 JLKFOOLFANP(::System::UInt64 ACHBBPJIBIE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_JLKFOOLFANP_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::HGGBGKKEBCC*>* EBJMOCFGEGN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::HGGBGKKEBCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_EBJMOCFGEGN_OFFSET))(this);
	}

	::HGGBGKKEBCC* HICKHIAIDGI(::System::UInt64 ACHBBPJIBIE)
	{
		return ((::HGGBGKKEBCC*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CPNAKAMCLBP_HICKHIAIDGI_OFFSET))(this, ACHBBPJIBIE);
	}
};
