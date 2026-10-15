#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKBGGJPKDKM.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define NGHFNHPJHJO_KEBOFLGJPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7678B0)
#define NGHFNHPJHJO_KEBOFLGJPIN_HIJHILKHPDA_1_OFFSET UNITYSDK_OFFSET(0x1C767610)
#define NGHFNHPJHJO_KEBOFLGJPIN_HIJHILKHPDA_OFFSET UNITYSDK_OFFSET(0x1C7671B0)

inline static constexpr unsigned int NGHFNHPJHJO_KEBOFLGJPIN_TypeDefinitionIndex = 36548;

	class NGHFNHPJHJO_KEBOFLGJPIN : public ::PKBGGJPKDKM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_KEBOFLGJPIN_CTOR_OFFSET))(this);
		}

		::System::Boolean HIJHILKHPDA(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_KEBOFLGJPIN_HIJHILKHPDA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HIJHILKHPDA_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_KEBOFLGJPIN_HIJHILKHPDA_1_OFFSET))(this, a1, a2);
		}

	};
