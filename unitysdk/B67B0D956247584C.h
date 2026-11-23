#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/BD51C9B00691E15F.h"
#include "unitysdk/FAD7E526D2841BDA.h"
#include "unitysdk/System/Object.h"

#define B67B0D956247584C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define B67B0D956247584C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1F60)

inline static constexpr unsigned int B67B0D956247584C_TypeDefinitionIndex = 8109;

class B67B0D956247584C : public ::System::Object
{
public:
	::FAD7E526D2841BDA E6BA899474558518; // 0x10
	::System::UInt32 E729C6F71BA8C13A; // 0x3C
	::System::UInt32 E5770E2D3D0E04AD; // 0x40
	::E68AA4EB51923C98::BD51C9B00691E15F ABBF7FE48471FAE1; // 0x44

	::System::Void _ctor(::FAD7E526D2841BDA EF41BD63C81C30E4)
	{
		return ((::System::Void(*)(::PVOID, ::FAD7E526D2841BDA))((::PBYTE)hIl2Cpp + B67B0D956247584C__CTOR_OFFSET))(this, EF41BD63C81C30E4);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B67B0D956247584C__CTOR_1_OFFSET))(this);
	}
};
