#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJHEGIPNKHB.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class JIOLFCAGOFH_1;

#define DMHOLJNNCJA_NKCJENBPBMA_BAOKJLCNBMA_OFFSET UNITYSDK_OFFSET(0x16978590)
#define DMHOLJNNCJA_NKCJENBPBMA_BKBOAPDEEEB_OFFSET UNITYSDK_OFFSET(0x169785A0)
#define DMHOLJNNCJA_NKCJENBPBMA_FODPPPAKJOB_OFFSET UNITYSDK_OFFSET(0x16978770)
#define DMHOLJNNCJA_NKCJENBPBMA_LFILCEHBOEC_OFFSET UNITYSDK_OFFSET(0x16978760)
#define DMHOLJNNCJA_NKCJENBPBMA_LPDECIMPMBB_OFFSET UNITYSDK_OFFSET(0x16977F90)
#define DMHOLJNNCJA_NKCJENBPBMA_MLIMAMLMBGN_OFFSET UNITYSDK_OFFSET(0x16978750)
#define DMHOLJNNCJA_NKCJENBPBMA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16978390)
#define DMHOLJNNCJA_NKCJENBPBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16978440)

inline static constexpr unsigned int DMHOLJNNCJA_NKCJENBPBMA_TypeDefinitionIndex = 46950;

class DMHOLJNNCJA_NKCJENBPBMA : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::FJHEGIPNKHB, ::System::Int32>, ::System::Int32>* IFFIFMECGPB; // 0x88
	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::FJHEGIPNKHB, ::System::Int32>, ::System::Int32>*>* _GAPDDLGIBGP_k__BackingField; // 0x90
	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* _PGLCKLFHNPG_k__BackingField; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MIPEIHBPODB; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* BAOKJLCNBMA()
	{
		return ((::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_BAOKJLCNBMA_OFFSET))(this);
	}

	::System::Void BKBOAPDEEEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_BKBOAPDEEEB_OFFSET))(this);
	}

	::System::Void MLIMAMLMBGN(::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_MLIMAMLMBGN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LPDECIMPMBB(::FJHEGIPNKHB MOHCFNIGGOE, ::System::Int32 KCNOHOOPNAH, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::FJHEGIPNKHB, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_LPDECIMPMBB_OFFSET))(this, MOHCFNIGGOE, KCNOHOOPNAH, JHFKDGBCOBA);
	}

	::System::Void LFILCEHBOEC(::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::FJHEGIPNKHB, ::System::Int32>, ::System::Int32>*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::FJHEGIPNKHB, ::System::Int32>, ::System::Int32>*>*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_LFILCEHBOEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::FJHEGIPNKHB, ::System::Int32>, ::System::Int32>*>* FODPPPAKJOB()
	{
		return ((::JIOLFCAGOFH_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::FJHEGIPNKHB, ::System::Int32>, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_NKCJENBPBMA_FODPPPAKJOB_OFFSET))(this);
	}
};
