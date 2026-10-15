#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int AllocFreeConcurrentStack_1_TypeDefinitionIndex = 6586;

	template <typename T>
	class AllocFreeConcurrentStack_1 : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_typeOfT()
		{
			return (::System::Type**)UnitySDK::FromName("System.Collections.Immutable", "AllocFreeConcurrentStack`1")->GetStaticField(0x0);
		}

	};
}
