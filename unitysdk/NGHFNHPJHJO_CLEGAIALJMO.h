#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDPAHELFOKO.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/MVector2.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define NGHFNHPJHJO_CLEGAIALJMO_CBOPKCILHDG_OFFSET UNITYSDK_OFFSET(0x1C795F80)
#define NGHFNHPJHJO_CLEGAIALJMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C795AD0)
#define NGHFNHPJHJO_CLEGAIALJMO_HIJHILKHPDA_1_OFFSET UNITYSDK_OFFSET(0x1C795500)
#define NGHFNHPJHJO_CLEGAIALJMO_HIJHILKHPDA_OFFSET UNITYSDK_OFFSET(0x1C795180)
#define NGHFNHPJHJO_CLEGAIALJMO_KLCHHHGDPOL_OFFSET UNITYSDK_OFFSET(0x1C795C50)
#define NGHFNHPJHJO_CLEGAIALJMO_OILCBENDLJB_OFFSET UNITYSDK_OFFSET(0x1C795F30)
#define NGHFNHPJHJO_CLEGAIALJMO_OKLACFBFOCN_OFFSET UNITYSDK_OFFSET(0x1C795AF0)

inline static constexpr unsigned int NGHFNHPJHJO_CLEGAIALJMO_TypeDefinitionIndex = 36547;

	class NGHFNHPJHJO_CLEGAIALJMO : public ::EDPAHELFOKO
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold MGJCFIPECOP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_CTOR_OFFSET))(this);
		}

		::RPG::MVector2 OKLACFBFOCN(::System::Int32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_OKLACFBFOCN_OFFSET))(this, a1);
		}

		::System::Single KLCHHHGDPOL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_KLCHHHGDPOL_OFFSET))(this);
		}

		::System::Boolean HIJHILKHPDA(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_HIJHILKHPDA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HIJHILKHPDA_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_HIJHILKHPDA_1_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 CBOPKCILHDG()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_CBOPKCILHDG_OFFSET))(this);
		}

		::System::Int32 OILCBENDLJB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CLEGAIALJMO_OILCBENDLJB_OFFSET))(this);
		}

	};
