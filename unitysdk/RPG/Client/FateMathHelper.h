#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_CLIENT_FATEMATHHELPER_FIXPOINT2PERCENTAGEINT_OFFSET UNITYSDK_OFFSET(0xCEA45A0)

namespace RPG::Client
{
	class FateMathHelper : public ::System::Object
	{
	public:
		static ::System::Int32 FixPoint2PercentageInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMATHHELPER_FIXPOINT2PERCENTAGEINT_OFFSET))(a1);
		}

	};
}
