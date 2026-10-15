#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBNHMHDMNP;
class DDHMKBHNMJF;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DDHMKBHNMJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE25D9E0)
#define DDHMKBHNMJF_CTOR_OFFSET UNITYSDK_OFFSET(0xE25DAE0)
#define DDHMKBHNMJF_GET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xE25DBB0)
#define DDHMKBHNMJF_GET_COINPRICEHISTORYS_OFFSET UNITYSDK_OFFSET(0xE25DBD0)
#define DDHMKBHNMJF_GET_TOTALBUYCOST_OFFSET UNITYSDK_OFFSET(0xE25DBF0)
#define DDHMKBHNMJF_GET_TOTALSELLREVENUE_OFFSET UNITYSDK_OFFSET(0xE25DC10)
#define DDHMKBHNMJF_SET_COINCOUNT_OFFSET UNITYSDK_OFFSET(0xE25DBC0)
#define DDHMKBHNMJF_SET_COINPRICEHISTORYS_OFFSET UNITYSDK_OFFSET(0xE25DBE0)
#define DDHMKBHNMJF_SET_TOTALBUYCOST_OFFSET UNITYSDK_OFFSET(0xE25DC00)
#define DDHMKBHNMJF_SET_TOTALSELLREVENUE_OFFSET UNITYSDK_OFFSET(0xE25DC20)
#define DDHMKBHNMJF_UPDATE_OFFSET UNITYSDK_OFFSET(0xE25DAF0)

inline static constexpr unsigned int DDHMKBHNMJF_TypeDefinitionIndex = 67702;

	class DDHMKBHNMJF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _CoinPriceHistorys_k__BackingField; // 0x10
		::System::UInt32 _TotalBuyCost_k__BackingField; // 0x18
		::System::UInt32 _CoinCount_k__BackingField; // 0x1C
		::System::UInt32 _TotalSellRevenue_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_CTOR_OFFSET))(this);
		}

		static ::DDHMKBHNMJF* BPLPBPMEODA(::AEBNHMHDMNP* a1)
		{
			return ((::DDHMKBHNMJF*(*)(::AEBNHMHDMNP*))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::AEBNHMHDMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEBNHMHDMNP*))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_GET_COINCOUNT_OFFSET))(this);
		}

		::System::Void set_CoinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_SET_COINCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_CoinPriceHistorys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_GET_COINPRICEHISTORYS_OFFSET))(this);
		}

		::System::Void set_CoinPriceHistorys(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_SET_COINPRICEHISTORYS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalBuyCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_GET_TOTALBUYCOST_OFFSET))(this);
		}

		::System::Void set_TotalBuyCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_SET_TOTALBUYCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalSellRevenue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_GET_TOTALSELLREVENUE_OFFSET))(this);
		}

		::System::Void set_TotalSellRevenue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDHMKBHNMJF_SET_TOTALSELLREVENUE_OFFSET))(this, a1);
		}

	};
