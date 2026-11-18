#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CGFLNMEGCGD.h"

#define EDMMIENABLC_GPJAMINEPHE_COMPARE_OFFSET UNITYSDK_OFFSET(0xFDD88E0)
#define EDMMIENABLC_GPJAMINEPHE__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD8960)

inline static constexpr unsigned int EDMMIENABLC_GPJAMINEPHE_TypeDefinitionIndex = 53787;

class EDMMIENABLC_GPJAMINEPHE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_GPJAMINEPHE__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::CGFLNMEGCGD HAAEBCOBKFF, ::CGFLNMEGCGD BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::CGFLNMEGCGD, ::CGFLNMEGCGD))((::PBYTE)hIl2Cpp + EDMMIENABLC_GPJAMINEPHE_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
