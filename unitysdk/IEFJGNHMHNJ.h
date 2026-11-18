#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALIDKOKGLNM.h"
#include "unitysdk/IEFJGNHMHNJ_CIMBJLMDKLN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/System/Nullable_1.h"

class AMMIEAEEEGB;
class DFEONFMKCKE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define IEFJGNHMHNJ_ADGLEHPADNO_OFFSET UNITYSDK_OFFSET(0x725DA0)
#define IEFJGNHMHNJ_AJBPNCDFBBP_OFFSET UNITYSDK_OFFSET(0x369C90)
#define IEFJGNHMHNJ_EHCFEPIEBBM_OFFSET UNITYSDK_OFFSET(0x141BEFD0)
#define IEFJGNHMHNJ_KELFPPKCJAH_OFFSET UNITYSDK_OFFSET(0x725DD0)
#define IEFJGNHMHNJ_KHPFFKJOHPD_OFFSET UNITYSDK_OFFSET(0x369FB0)
#define IEFJGNHMHNJ_NLGLEHIEANP_OFFSET UNITYSDK_OFFSET(0x725DC0)

inline static constexpr unsigned int IEFJGNHMHNJ_TypeDefinitionIndex = 48250;

struct alignas(8) IEFJGNHMHNJ
{
	::ALIDKOKGLNM _ODODGDEFKLL_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>* HEDOPGPCOJG; // 0x28

	::ALIDKOKGLNM KHPFFKJOHPD()
	{
		return ((::ALIDKOKGLNM(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_KHPFFKJOHPD_OFFSET))(this);
	}

	/*
	static ::IEFJGNHMHNJ EHCFEPIEBBM(::DFEONFMKCKE* HHGKONBBBAB, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* BGOCGNGNMGD)
	{
		return ((::IEFJGNHMHNJ(*)(::DFEONFMKCKE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_EHCFEPIEBBM_OFFSET))(HHGKONBBBAB, BGOCGNGNMGD);
	}
	*/

	::System::Nullable_1<::EAOGLMKGMGE> ADGLEHPADNO(::System::UInt32 NJNCGJLHLKC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>* IODCDHMINKA)
	{
		return ((::System::Nullable_1<::EAOGLMKGMGE>(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>*))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_ADGLEHPADNO_OFFSET))(this, NJNCGJLHLKC, IODCDHMINKA);
	}

	::System::Void AJBPNCDFBBP(::ALIDKOKGLNM EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ALIDKOKGLNM))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_AJBPNCDFBBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NLGLEHIEANP(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>* IODCDHMINKA, ::IEFJGNHMHNJ_CIMBJLMDKLN ICBBHCNGFEC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>*, ::IEFJGNHMHNJ_CIMBJLMDKLN))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_NLGLEHIEANP_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, IODCDHMINKA, ICBBHCNGFEC);
	}

	::System::Void KELFPPKCJAH(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>* IODCDHMINKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>*))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_KELFPPKCJAH_OFFSET))(this, IODCDHMINKA);
	}
};
