#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IHJCEHGLNGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC35620)

inline static constexpr unsigned int IHJCEHGLNGN_TypeDefinitionIndex = 43930;

	class IHJCEHGLNGN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJCEHGLNGN_CTOR_OFFSET))(this);
		}

	};
