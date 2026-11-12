#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABEBFNICDHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB753E10)

inline static constexpr unsigned int ABEBFNICDHE_TypeDefinitionIndex = 57183;

	class ABEBFNICDHE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBFNICDHE_CTOR_OFFSET))(this);
		}

	};
