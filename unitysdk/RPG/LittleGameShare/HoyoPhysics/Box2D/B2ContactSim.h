#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0xC8A6EB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A7C80)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactSim_TypeDefinitionIndex = 37558;

	class B2ContactSim : public ::System::Object
	{
	public:
		::System::Single rollingResistance; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache cache; // 0x14
		::System::Int32 shapeIdA; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold manifold; // 0x20
		::System::Single invMassA; // 0x90
		::System::Single invIB; // 0x94
		::System::Single friction; // 0x98
		::System::Single tangentSpeed; // 0x9C
		::System::Single invIA; // 0xA0
		::System::Int32 bodySimIndexB; // 0xA4
		::System::Single restitution; // 0xA8
		::System::Int32 shapeIdB; // 0xAC
		::System::Single invMassB; // 0xB0
		::System::UInt32 simFlags; // 0xB4
		::System::Int32 contactId; // 0xB8
		::System::Int32 bodySimIndexA; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_COPYFROM_OFFSET))(this, a1);
		}

	};
}
