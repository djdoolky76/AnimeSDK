#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueBuffWithBuffTypeConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE7230)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE7240)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE71F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffWithBuffTypeConfig_TypeDefinitionIndex = 20003;

	class RogueActGetRogueBuffWithBuffTypeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
