#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GJBPNAHFLMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5A7F0)

inline static constexpr unsigned int GJBPNAHFLMN_TypeDefinitionIndex = 55936;

	class GJBPNAHFLMN : public ::System::Object
	{
	public:
		::System::Int32 BGIDDALFJGJ; // 0x10
		::System::Int32 ECAFNICJGOJ; // 0x14
		::System::Single MPKPILNMIIA; // 0x18
		::System::Int32 HIOKKHPHNHD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBPNAHFLMN_CTOR_OFFSET))(this);
		}

	};
