#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGGIAPOEPLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C60E840)

inline static constexpr unsigned int GGGIAPOEPLP_TypeDefinitionIndex = 36469;

	class GGGIAPOEPLP : public ::System::Object
	{
	public:
		::System::Int32 IMKHIDEBGEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGIAPOEPLP_CTOR_OFFSET))(this);
		}

	};
