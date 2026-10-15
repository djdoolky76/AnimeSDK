#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG
{
	template <typename T1, typename T2, typename T3, typename T4>
	class DelegateBinder_4 : public ::System::Object
	{
	public:
		T2 _bindDelg; // 0x0
		T3 _resultDelg; // 0x0
		T4 _t; // 0x0
		static T1* StaticGet__tempInst()
		{
			return (T1*)UnitySDK::FromName("RPG", "DelegateBinder`4")->GetStaticField(0x0);
		}

	};
}
