#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class JIOLFCAGOFH_1;

#define EKGAHGCJOAN_CJIENJNLLKH_BAOKJLCNBMA_OFFSET UNITYSDK_OFFSET(0xF9D9190)
#define EKGAHGCJOAN_CJIENJNLLKH_BKBOAPDEEEB_OFFSET UNITYSDK_OFFSET(0xF9D8C90)
#define EKGAHGCJOAN_CJIENJNLLKH_FODPPPAKJOB_OFFSET UNITYSDK_OFFSET(0xF9D91B0)
#define EKGAHGCJOAN_CJIENJNLLKH_LFILCEHBOEC_OFFSET UNITYSDK_OFFSET(0xF9D8E50)
#define EKGAHGCJOAN_CJIENJNLLKH_LPDECIMPMBB_OFFSET UNITYSDK_OFFSET(0xF9D8E60)
#define EKGAHGCJOAN_CJIENJNLLKH_MLIMAMLMBGN_OFFSET UNITYSDK_OFFSET(0xF9D91A0)
#define EKGAHGCJOAN_CJIENJNLLKH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xF9D8A60)
#define EKGAHGCJOAN_CJIENJNLLKH__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D8B10)

inline static constexpr unsigned int EKGAHGCJOAN_CJIENJNLLKH_TypeDefinitionIndex = 51197;

class EKGAHGCJOAN_CJIENJNLLKH : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MIPEIHBPODB; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* IFFIFMECGPB; // 0x90
	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* _PGLCKLFHNPG_k__BackingField; // 0x98
	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>*>* _GAPDDLGIBGP_k__BackingField; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void BKBOAPDEEEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_BKBOAPDEEEB_OFFSET))(this);
	}

	::System::Void LFILCEHBOEC(::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_LFILCEHBOEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LPDECIMPMBB(::System::Int32 MOHCFNIGGOE, ::System::Int32 KCNOHOOPNAH, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_LPDECIMPMBB_OFFSET))(this, MOHCFNIGGOE, KCNOHOOPNAH, JHFKDGBCOBA);
	}

	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* BAOKJLCNBMA()
	{
		return ((::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_BAOKJLCNBMA_OFFSET))(this);
	}

	::System::Void MLIMAMLMBGN(::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_MLIMAMLMBGN_OFFSET))(this, EGEGIMGMJHN);
	}

	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>*>* FODPPPAKJOB()
	{
		return ((::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CJIENJNLLKH_FODPPPAKJOB_OFFSET))(this);
	}
};
