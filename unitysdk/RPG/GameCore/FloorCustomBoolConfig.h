#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorCustomBoolConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7510)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D6B76B0)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6B7680)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B7520)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B74E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomBoolConfig_TypeDefinitionIndex = 18283;

	class FloorCustomBoolConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::System::Boolean DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
