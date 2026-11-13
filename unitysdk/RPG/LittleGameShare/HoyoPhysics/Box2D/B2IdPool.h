#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8D8020)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC8D8030)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2IdPool_TypeDefinitionIndex = 37615;

	class B2IdPool : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::System::Int32> freeArray; // 0x10
		::System::Byte _padding0[0x8];
		::System::Int32 nextIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL_CLEAR_OFFSET))(this);
		}

	};
}
