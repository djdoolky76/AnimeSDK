#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"

#define AEMJNCDFIAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C879420)

	class AEMJNCDFIAO : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask CFFABBFHHMJ; // 0x10
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask IPMHGBLDCHO; // 0x14
		::System::Boolean NIOHOMDPPKA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMJNCDFIAO_CTOR_OFFSET))(this);
		}

	};
