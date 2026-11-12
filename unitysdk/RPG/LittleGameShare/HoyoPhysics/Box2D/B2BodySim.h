#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodySim; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D982520)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1D98C1A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98C220)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodySim_TypeDefinitionIndex = 37525;

	class B2BodySim : public ::System::Object
	{
	public:
		::System::Single angularDamping; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 force; // 0x14
		::System::Single invInertia; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot rotation0; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transform; // 0x28
		::System::UInt32 flags; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCenter; // 0x3C
		::System::Single maxExtent; // 0x44
		::System::Single gravityScale; // 0x48
		::System::Single linearDamping; // 0x4C
		::System::Single minExtent; // 0x50
		::System::Single torque; // 0x54
		::System::Single invMass; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 center0; // 0x5C
		::System::Int32 bodyId; // 0x64
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 center; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_COPYFROM_OFFSET))(this, a1);
		}

	};
}
