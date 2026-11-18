#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CriWare/CriAtomExLatencyEstimator_EstimatorInfo.h"

#define CRIWARE_CRIATOMEXLATENCYESTIMATOR_FINALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1FFEA4B0)
#define CRIWARE_CRIATOMEXLATENCYESTIMATOR_GETCURRENTINFO_OFFSET UNITYSDK_OFFSET(0x1FFEA4C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExLatencyEstimator_TypeDefinitionIndex = 34476;

	class CriAtomExLatencyEstimator : public ::System::Object
	{
	public:
		static ::System::Void FinalizeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXLATENCYESTIMATOR_FINALIZEMODULE_OFFSET))();
		}

		static ::CriWare::CriAtomExLatencyEstimator_EstimatorInfo GetCurrentInfo()
		{
			return ((::CriWare::CriAtomExLatencyEstimator_EstimatorInfo(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXLATENCYESTIMATOR_GETCURRENTINFO_OFFSET))();
		}
	};
}
