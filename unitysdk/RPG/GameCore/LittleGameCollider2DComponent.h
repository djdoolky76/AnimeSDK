#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameCollider2DComponent; }

#define RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B0C20)
#define RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B1A30)
#define RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B18D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCollider2DComponent_TypeDefinitionIndex = 18881;

	class LittleGameCollider2DComponent : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Density; // 0x10
		::System::Single Friction; // 0x14
		::System::Boolean IsSensor; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Restitution; // 0x1C
		::System::Boolean EnableCollisionEvent; // 0x20
		::System::Boolean EnableSensorEvent; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCollider2DComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCollider2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCollider2DComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCollider2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
