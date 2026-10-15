#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BGGDOPNKDLK_MMDPKKPOHOG;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMNEDLJOPNM_BOMBCECLEHD_OFFSET UNITYSDK_OFFSET(0x1C7AAAB0)
#define OMNEDLJOPNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7AAC40)
#define OMNEDLJOPNM_FCNJPFEMGGE_OFFSET UNITYSDK_OFFSET(0x1C7AABD0)
#define OMNEDLJOPNM_GDPJDHAGKBI_OFFSET UNITYSDK_OFFSET(0x1C7AA940)
#define OMNEDLJOPNM_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1C7AABE0)
#define OMNEDLJOPNM_GET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x1C7AAC20)
#define OMNEDLJOPNM_GET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x1C7AAC00)
#define OMNEDLJOPNM_GNAANDKLBGB_OFFSET UNITYSDK_OFFSET(0x1C7AAB90)
#define OMNEDLJOPNM_IALJKDFFFEL_OFFSET UNITYSDK_OFFSET(0x1C7AAB40)
#define OMNEDLJOPNM_INDNACOGMGN_OFFSET UNITYSDK_OFFSET(0x1C7AA900)
#define OMNEDLJOPNM_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1C7AABF0)
#define OMNEDLJOPNM_SET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x1C7AAC30)
#define OMNEDLJOPNM_SET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x1C7AAC10)

inline static constexpr unsigned int OMNEDLJOPNM_TypeDefinitionIndex = 37237;

	class OMNEDLJOPNM : public ::System::Object
	{
	public:
		::BGGDOPNKDLK_MMDPKKPOHOG* _CacheGoalWeightCalculator_k__BackingField; // 0x10
		::System::UInt32 _JumpCntsAfterCache_k__BackingField; // 0x18
		::System::Boolean ENOCIIPCODA; // 0x1C
		::System::Boolean _IsForCat_k__BackingField; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* INDNACOGMGN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_INDNACOGMGN_OFFSET))(this);
		}

		::System::Boolean GDPJDHAGKBI(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_GDPJDHAGKBI_OFFSET))(this, a1, a2);
		}

		::System::Void IALJKDFFFEL(::BGGDOPNKDLK_MMDPKKPOHOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGDOPNKDLK_MMDPKKPOHOG*))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_IALJKDFFFEL_OFFSET))(this, a1);
		}

		::System::Void GNAANDKLBGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_GNAANDKLBGB_OFFSET))(this);
		}

		::System::Boolean FCNJPFEMGGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_FCNJPFEMGGE_OFFSET))(this);
		}

		::System::Void BOMBCECLEHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_BOMBCECLEHD_OFFSET))(this, a1);
		}

		::BGGDOPNKDLK_MMDPKKPOHOG* get_CacheGoalWeightCalculator()
		{
			return ((::BGGDOPNKDLK_MMDPKKPOHOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET))(this);
		}

		::System::Void set_CacheGoalWeightCalculator(::BGGDOPNKDLK_MMDPKKPOHOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGDOPNKDLK_MMDPKKPOHOG*))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_JumpCntsAfterCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_GET_JUMPCNTSAFTERCACHE_OFFSET))(this);
		}

		::System::Void set_JumpCntsAfterCache(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_SET_JUMPCNTSAFTERCACHE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForCat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_GET_ISFORCAT_OFFSET))(this);
		}

		::System::Void set_IsForCat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMNEDLJOPNM_SET_ISFORCAT_OFFSET))(this, a1);
		}

	};
