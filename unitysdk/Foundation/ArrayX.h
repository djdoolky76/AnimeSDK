#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ARRAYX_ISIN_2_OFFSET UNITYSDK_OFFSET(0x1D72E7D0)
#define FOUNDATION_ARRAYX_ISNOTIN_2_OFFSET UNITYSDK_OFFSET(0x1D72E860)

namespace Foundation
{
	inline static constexpr unsigned int ArrayX_TypeDefinitionIndex = 7983;

	class ArrayX : public ::System::Object
	{
	public:
		static ::System::Boolean IsIn_2(::System::Int32 source, ::Il2CppArray<::System::Int32>* list)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_ARRAYX_ISIN_2_OFFSET))(source, list);
		}

		static ::System::Boolean IsNotIn_2(::System::Int32 source, ::Il2CppArray<::System::Int32>* list)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_ARRAYX_ISNOTIN_2_OFFSET))(source, list);
		}
	};
}
