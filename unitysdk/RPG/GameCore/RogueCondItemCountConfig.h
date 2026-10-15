#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondItemCountConfig; }

#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984950)
#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984960)
#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondItemCountConfig_TypeDefinitionIndex = 19796;

	class RogueCondItemCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondItemCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondItemCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondItemCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondItemCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
