#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IEPAEJLBHPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCEE10)

inline static constexpr unsigned int IEPAEJLBHPP_TypeDefinitionIndex = 44313;

	class IEPAEJLBHPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPAEJLBHPP_CTOR_OFFSET))(this);
		}

	};
