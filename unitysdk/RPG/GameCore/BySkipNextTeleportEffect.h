#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BySkipNextTeleportEffect; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D536F20)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5370A0)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D537070)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D536F30)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D536EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySkipNextTeleportEffect_TypeDefinitionIndex = 20586;

	class BySkipNextTeleportEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
