#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBoxCollider2DComponent; }
namespace RPG::GameCore { class LittleGameBoxCollider2DGroupComponent; }

#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE700)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DE710)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DE6B0)

namespace RPG::GameCore
{
	class LittleGameBoxCollider2DGroupComponent : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameBoxCollider2DComponent*>* Colliders; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
