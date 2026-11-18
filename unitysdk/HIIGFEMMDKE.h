#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

#define HIIGFEMMDKE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x282350)
#define HIIGFEMMDKE_RESET_OFFSET UNITYSDK_OFFSET(0x736730)

inline static constexpr unsigned int HIIGFEMMDKE_TypeDefinitionIndex = 84477;

struct alignas(4) HIIGFEMMDKE
{
	::Foundation::Unreal::FName CEBJLNNENLH; // 0x10
	::System::Single GPIOJBLKFAJ; // 0x18

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIGFEMMDKE_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + HIIGFEMMDKE_RESET_OFFSET))(this, HIAIKHDFCLN);
	}
};
