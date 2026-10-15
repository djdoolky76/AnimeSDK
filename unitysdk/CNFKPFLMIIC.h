#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNFKPFLMIIC_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4C490)

inline static constexpr unsigned int CNFKPFLMIIC_TypeDefinitionIndex = 81268;

	class CNFKPFLMIIC : public ::System::Object
	{
	public:
		::System::Boolean CAGCHKJHMPD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFKPFLMIIC_CTOR_OFFSET))(this);
		}

	};
