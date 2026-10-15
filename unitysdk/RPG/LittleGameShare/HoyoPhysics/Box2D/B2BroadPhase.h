#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2HashSet.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2DynamicTree; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MovePair; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MoveResult; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C7FC0D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7FBB60)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	class B2BroadPhase : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::System::Int32> moveArray; // 0x10
		::System::Byte _padding0[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MoveResult*> moveResults; // 0x20
		::System::Byte _padding1[0x8];
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*>* trees; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet pairSet; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet moveSet; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MovePair*> movePairs; // 0x58
		::System::Byte _padding2[0x8];
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt movePairIndex; // 0x68
		::System::Int32 movePairCapacity; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE_CLEAR_OFFSET))(this);
		}

	};
}
