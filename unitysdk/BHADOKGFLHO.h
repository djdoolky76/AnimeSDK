#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MMFGAMNPHDJ.h"
namespace RPG::Client { class ItemCostCalculateResult; }
namespace RPG::Client { class ItemCostCalculator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHADOKGFLHO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB46E4D0)
#define BHADOKGFLHO_DFLBMLAMMIN_OFFSET UNITYSDK_OFFSET(0xB46E390)
#define BHADOKGFLHO_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xB46E0A0)
#define BHADOKGFLHO_LFPEICPKKMF_OFFSET UNITYSDK_OFFSET(0xB46E170)

inline static constexpr unsigned int BHADOKGFLHO_TypeDefinitionIndex = 65732;

	class BHADOKGFLHO : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_GDDICPCFJON()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BHADOKGFLHO")->GetStaticField(0x156F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHADOKGFLHO_CCTOR_OFFSET))();
		}

		static ::MMFGAMNPHDJ KHJNHDOJDDP(::RPG::Client::ItemCostCalculator* a1)
		{
			return ((::MMFGAMNPHDJ(*)(::RPG::Client::ItemCostCalculator*))((::PBYTE)hIl2Cpp + BHADOKGFLHO_KHJNHDOJDDP_OFFSET))(a1);
		}

		static ::System::Void LFPEICPKKMF(::MMFGAMNPHDJ a1, ::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* a2)
		{
			return ((::System::Void(*)(::MMFGAMNPHDJ, ::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>*))((::PBYTE)hIl2Cpp + BHADOKGFLHO_LFPEICPKKMF_OFFSET))(a1, a2);
		}

		static ::System::Boolean DFLBMLAMMIN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BHADOKGFLHO_DFLBMLAMMIN_OFFSET))(a1);
		}

	};
