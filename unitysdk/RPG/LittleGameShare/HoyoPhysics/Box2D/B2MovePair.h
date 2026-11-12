#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MovePair; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVEPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D97EA70)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MovePair_TypeDefinitionIndex = 37646;

	class B2MovePair : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MovePair* next; // 0x10
		::System::Boolean heap; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 shapeIndexB; // 0x1C
		::System::Int32 shapeIndexA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVEPAIR_CTOR_OFFSET))(this);
		}

	};
}
