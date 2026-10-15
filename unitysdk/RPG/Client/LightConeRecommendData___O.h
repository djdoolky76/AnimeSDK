#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeRecommendData___O_TypeDefinitionIndex = 66813;

	class LightConeRecommendData___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::FJIFFMGIAHL*>** StaticGet__0____SortLightConeByUsageRate()
		{
			return (::System::Comparison_1<::FJIFFMGIAHL*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x19060);
		}

	};
}
