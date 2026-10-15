#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorCustomFloatConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E56D0)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D6E5840)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6E5810)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E56E0)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E56A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomFloatConfig_TypeDefinitionIndex = 18282;

	class FloorCustomFloatConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::System::Single DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
