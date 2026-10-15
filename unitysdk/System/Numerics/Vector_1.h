#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Register.h"
namespace System::Numerics { class Vector; }

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_1_TypeDefinitionIndex = 3861;

	template <typename T>
	struct alignas(4) Vector_1
	{
		::System::Numerics::Register register_; // 0x0
		static ::System::Int32* StaticGet_s_count()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics", "Vector`1")->GetStaticField(0x0);
		}

		static ::System::Numerics::Vector** StaticGet_s_zero()
		{
			return (::System::Numerics::Vector**)UnitySDK::FromName("System.Numerics", "Vector`1")->GetStaticField(0x0);
		}

		static ::System::Numerics::Vector** StaticGet_s_one()
		{
			return (::System::Numerics::Vector**)UnitySDK::FromName("System.Numerics", "Vector`1")->GetStaticField(0x0);
		}

		static ::System::Numerics::Vector** StaticGet_s_allOnes()
		{
			return (::System::Numerics::Vector**)UnitySDK::FromName("System.Numerics", "Vector`1")->GetStaticField(0x0);
		}

	};
}
