#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8A7760)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0xC8A78F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CTOR_OFFSET UNITYSDK_OFFSET(0xC8D9070)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointSim_TypeDefinitionIndex = 37628;

	class B2JointSim : public ::System::Object
	{
	public:
		::System::Single invIB; // 0x10
		::System::Single invMassA; // 0x14
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0x18
		::System::Single forceThreshold; // 0x1C
		::System::Single invMassB; // 0x20
		::System::Single torqueThreshold; // 0x24
		::System::Int32 jointId; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness constraintSoftness; // 0x2C
		::System::Single invIA; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointUnion uj; // 0x3C
		::System::Single constraintHertz; // 0xB4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameB; // 0xB8
		::System::Single constraintDampingRatio; // 0xC8
		::System::Int32 bodyIdA; // 0xCC
		::System::Int32 bodyIdB; // 0xD0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameA; // 0xD4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_COPYFROM_OFFSET))(this, a1);
		}

	};
}
