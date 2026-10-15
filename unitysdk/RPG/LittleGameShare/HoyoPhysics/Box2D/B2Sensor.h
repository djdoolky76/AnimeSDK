#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Visitor.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84F510)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	class B2Sensor : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor> overlaps1; // 0x10
		::System::Byte _padding0[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor> overlaps2; // 0x20
		::System::Byte _padding1[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor> hits; // 0x30
		::System::Byte _padding2[0x8];
		::System::Int32 shapeId; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSOR_CTOR_OFFSET))(this);
		}

	};
}
