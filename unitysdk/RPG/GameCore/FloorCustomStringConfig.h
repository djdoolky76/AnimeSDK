#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorCustomStringConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AC150)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1F7AC2C0)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1F7AC290)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F7AC160)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7AC120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomStringConfig_TypeDefinitionIndex = 18446;

	class FloorCustomStringConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::System::String* DefaultValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
