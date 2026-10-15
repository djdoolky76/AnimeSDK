#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondCurAeonConfig; }

#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2190)
#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B21A0)
#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondCurAeonConfig_TypeDefinitionIndex = 19793;

	class RogueCondCurAeonConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondCurAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondCurAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondCurAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondCurAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
