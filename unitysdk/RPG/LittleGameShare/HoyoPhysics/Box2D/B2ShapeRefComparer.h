#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Visitor.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ShapeRefComparer; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C851160)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C851150)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C851140)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeRefComparer_TypeDefinitionIndex = 36768;

	class B2ShapeRefComparer : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeRefComparer** StaticGet_Shared()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeRefComparer**)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2ShapeRefComparer")->GetStaticField(0x22760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Visitor))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPEREFCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
