#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"

#define PBKHDCIJJLE_LKAADBKGLDF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x282350)
#define PBKHDCIJJLE_LKAADBKGLDF_RESET_OFFSET UNITYSDK_OFFSET(0x800560)

inline static constexpr unsigned int PBKHDCIJJLE_LKAADBKGLDF_TypeDefinitionIndex = 70851;

struct alignas(4) PBKHDCIJJLE_LKAADBKGLDF
{
	::Foundation::Unreal::FName CEBJLNNENLH; // 0x10
	::Foundation::Unreal::FTransform3D LGDGLKCOENO; // 0x18
	::HHDPDELCDNI NAEKPBFKIHG; // 0x40

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKHDCIJJLE_LKAADBKGLDF_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PBKHDCIJJLE_LKAADBKGLDF_RESET_OFFSET))(this, HIAIKHDFCLN);
	}
};
