#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ZLinq::Internal { template <typename T> class RentedArrayBox_1; }

namespace ZLinq::Internal
{
	template <typename T>
	class RentedArrayBox_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array_P; // 0x0
		::System::Int32 _length_P; // 0x0
		static ::ZLinq::Internal::RentedArrayBox_1<T>** StaticGet_Empty()
		{
			return (::ZLinq::Internal::RentedArrayBox_1<T>**)UnitySDK::FromName("ZLinq.Internal", "RentedArrayBox`1")->GetStaticField(0x0);
		}

	};
}
