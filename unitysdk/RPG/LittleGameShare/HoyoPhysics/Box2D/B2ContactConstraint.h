#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactConstraintPoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2ContactConstraint
	{
		::System::Int32 indexA; // 0x10
		::System::Int32 indexB; // 0x14
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactConstraintPoint> points; // 0x18
		::System::Byte _padding0[0x50];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x70
		::System::Single invMassA; // 0x78
		::System::Single invMassB; // 0x7C
		::System::Single invIA; // 0x80
		::System::Single invIB; // 0x84
		::System::Single friction; // 0x88
		::System::Single restitution; // 0x8C
		::System::Single tangentSpeed; // 0x90
		::System::Single rollingResistance; // 0x94
		::System::Single rollingMass; // 0x98
		::System::Single rollingImpulse; // 0x9C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness softness; // 0xA0
		::System::Int32 pointCount; // 0xAC
	};
}
