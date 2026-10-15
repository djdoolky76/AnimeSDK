#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueValueModifyFactor; }

#define RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA45A30)
#define RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA459F0)

namespace RPG::GameCore
{
	class RogueValueModifyFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueValueModifyFactor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueValueModifyFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUEMODIFYFACTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
