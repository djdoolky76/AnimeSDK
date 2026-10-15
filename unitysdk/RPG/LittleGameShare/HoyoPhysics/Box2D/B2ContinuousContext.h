#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray8_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorHit.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Sweep.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodySim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2ContinuousContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim* fastBodySim; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* fastShape; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 centroid1; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 centroid2; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep sweep; // 0x38
		::System::Single fraction; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray8_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorHit> sensorHits; // 0x64
		::System::Byte _padding0[0x38];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray8_1<::System::Single> sensorFractions; // 0xA4
		::System::Byte _padding1[0x18];
		::System::Int32 sensorCount; // 0xC4
	};
}
