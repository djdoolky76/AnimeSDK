#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OMFFEDAJBMA_PGNGOMDAJKJ_OFFSET UNITYSDK_OFFSET(0x1EC121D0)

inline static constexpr unsigned int OMFFEDAJBMA_TypeDefinitionIndex = 35283;

	class OMFFEDAJBMA : public ::System::Object
	{
	public:
		static ::System::Int32 PGNGOMDAJKJ(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + OMFFEDAJBMA_PGNGOMDAJKJ_OFFSET))(a1);
		}

	};
