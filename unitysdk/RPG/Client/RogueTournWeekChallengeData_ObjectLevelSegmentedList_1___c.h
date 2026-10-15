#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c_TypeDefinitionIndex = 67882;

	template <typename T>
	class RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, T>>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, T>>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

	};
}
