#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDAELFIKPHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB83300)

inline static constexpr unsigned int KDAELFIKPHH_TypeDefinitionIndex = 43731;

	class KDAELFIKPHH : public ::System::Object
	{
	public:
		::System::Int32 KJJEEBJNAAA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDAELFIKPHH_CTOR_OFFSET))(this);
		}

	};
