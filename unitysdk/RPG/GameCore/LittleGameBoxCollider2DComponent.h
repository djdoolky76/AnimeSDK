#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameCollider2DComponent.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBoxCollider2DComponent; }

#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE2D0)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DE2E0)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DE280)

namespace RPG::GameCore
{
	class LittleGameBoxCollider2DComponent : public ::RPG::GameCore::LittleGameCollider2DComponent
	{
	public:
		::System::Single Width; // 0x28
		::System::Single Height; // 0x2C
		::RPG::MVector2 Center; // 0x30
		::System::Single Angle; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBoxCollider2DComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBoxCollider2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBoxCollider2DComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBoxCollider2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
