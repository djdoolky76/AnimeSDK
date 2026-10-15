#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"

#define AEMJNCDFIAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84B420)

inline static constexpr unsigned int AEMJNCDFIAO_TypeDefinitionIndex = 43207;

	class AEMJNCDFIAO : public ::System::Object
	{
	public:
		::System::Boolean NIOHOMDPPKA; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask CFFABBFHHMJ; // 0x14
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask IPMHGBLDCHO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMJNCDFIAO_CTOR_OFFSET))(this);
		}

	};
