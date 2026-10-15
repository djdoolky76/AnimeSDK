#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBuffNumParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA99B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA99C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9970)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueBuffNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
