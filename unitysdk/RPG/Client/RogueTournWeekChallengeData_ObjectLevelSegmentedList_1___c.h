#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

namespace RPG::Client
{
	template <typename T>
	class RogueTournWeekChallengeData_ObjectLevelSegmentedList_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x0);
		}

	};
}
