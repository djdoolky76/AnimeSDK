#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGGIAPOEPLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BE850)

inline static constexpr unsigned int GGGIAPOEPLP_TypeDefinitionIndex = 37397;

	class GGGIAPOEPLP : public ::System::Object
	{
	public:
		::System::Int32 IMKHIDEBGEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGIAPOEPLP_CTOR_OFFSET))(this);
		}

	};
