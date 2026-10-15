#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPGECKIMDKM.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleData___O_TypeDefinitionIndex = 67897;

	class ScheduleData___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::BPGECKIMDKM>** StaticGet__0___CandidateComparison()
		{
			return (::System::Comparison_1<::BPGECKIMDKM>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6ED10);
		}

	};
}
