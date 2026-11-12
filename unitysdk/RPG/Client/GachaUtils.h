#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGachaPoolData; }

#define RPG_CLIENT_GACHAUTILS_GOTOCUMULATIVECONSUMPTIONEXEIDOLONRECOMMENDPAGE_OFFSET UNITYSDK_OFFSET(0xDA28130)
#define RPG_CLIENT_GACHAUTILS_ISCUMULATIVECONSUMPTIONEXEIDOLONRECOMMENDPOOL_OFFSET UNITYSDK_OFFSET(0xDA28090)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaUtils_TypeDefinitionIndex = 65770;

	class GachaUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsCumulativeConsumptionExEidolonRecommendPool(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAUTILS_ISCUMULATIVECONSUMPTIONEXEIDOLONRECOMMENDPOOL_OFFSET))(a1);
		}

		static ::System::Void GotoCumulativeConsumptionExEidolonRecommendPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAUTILS_GOTOCUMULATIVECONSUMPTIONEXEIDOLONRECOMMENDPAGE_OFFSET))();
		}

	};
}
