#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine::Utility
{
	template <typename T>
	class GaussianWindow1d_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* mData; // 0x0
		::Il2CppArray<::System::Single>* mKernel; // 0x0
		::System::Int32 mCurrentPos; // 0x0
		::System::Single _Sigma_k__BackingField; // 0x0
	};
}
