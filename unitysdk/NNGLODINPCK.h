#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNGLODINPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA8C50)

inline static constexpr unsigned int NNGLODINPCK_TypeDefinitionIndex = 73836;

	class NNGLODINPCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGLODINPCK_CTOR_OFFSET))(this);
		}

	};
