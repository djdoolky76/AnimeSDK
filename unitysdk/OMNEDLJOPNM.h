#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BGGDOPNKDLK_MMDPKKPOHOG;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMNEDLJOPNM_BOMBCECLEHD_OFFSET UNITYSDK_OFFSET(0x1C7D8C50)
#define OMNEDLJOPNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8DE0)
#define OMNEDLJOPNM_FCNJPFEMGGE_OFFSET UNITYSDK_OFFSET(0x1C7D8D70)
#define OMNEDLJOPNM_GDPJDHAGKBI_OFFSET UNITYSDK_OFFSET(0x1C7D8AE0)
#define OMNEDLJOPNM_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1C7D8D80)
#define OMNEDLJOPNM_GET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x1C7D8DC0)
#define OMNEDLJOPNM_GET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x1C7D8DA0)
#define OMNEDLJOPNM_GNAANDKLBGB_OFFSET UNITYSDK_OFFSET(0x1C7D8D30)
#define OMNEDLJOPNM_IALJKDFFFEL_OFFSET UNITYSDK_OFFSET(0x1C7D8CE0)
#define OMNEDLJOPNM_INDNACOGMGN_OFFSET UNITYSDK_OFFSET(0x1C7D8AA0)
#define OMNEDLJOPNM_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x1C7D8D90)
#define OMNEDLJOPNM_SET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x1C7D8DD0)
#define OMNEDLJOPNM_SET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x1C7D8DB0)

inline static constexpr unsigned int OMNEDLJOPNM_TypeDefinitionIndex = 37237;

	class OMNEDLJOPNM : public ::System::Object
	{
	public:
		::BGGDOPNKDLK_MMDPKKPOHOG* _CacheGoalWeightCalculator_k__BackingField; // 0x10
		::System::Boolean ENOCIIPCODA; // 0x18
		::System::Boolean _IsForCat_k__BackingField; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 _JumpCntsAfterCache_k__BackingField; // 0x1C
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
