#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelMasterRecommendationData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDMOCIICAEC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB52960)
#define NDMOCIICAEC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB52F00)
#define NDMOCIICAEC_JMMLHADMHJK_OFFSET UNITYSDK_OFFSET(0xBB52F40)
#define NDMOCIICAEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xBB53010)

	class NDMOCIICAEC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>* ANEGPMAIBPF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterRecommendationData*>* GPNJONIFBNH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>*>* MGCGMKBDPLL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMOCIICAEC_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMOCIICAEC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>* JMMLHADMHJK(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ChimeraDuelMasterRecommendationData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDMOCIICAEC_JMMLHADMHJK_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelMasterRecommendationData* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelMasterRecommendationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDMOCIICAEC_LMBKNCAIDLC_OFFSET))(this, a1);
		}

	};
