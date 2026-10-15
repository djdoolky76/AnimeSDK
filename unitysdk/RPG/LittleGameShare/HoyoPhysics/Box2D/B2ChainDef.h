#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SurfaceMaterial.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2ChainDef
	{
		::System::Object* userData; // 0x10
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>* points; // 0x18
		::System::Int32 count; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial>* materials; // 0x28
		::System::Int32 materialCount; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x38
		::System::Boolean isLoop; // 0x50
		::System::Boolean enableSensorEvents; // 0x51
		::System::Byte _padding2[0x2];
		::System::Int32 internalValue; // 0x54
	};
}
