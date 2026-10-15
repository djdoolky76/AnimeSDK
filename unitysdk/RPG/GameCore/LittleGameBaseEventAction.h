#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameBaseEventAction; }

#define RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFEC0)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AFE60)
#define RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AFE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBaseEventAction_TypeDefinitionIndex = 18861;

	class LittleGameBaseEventAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBaseEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameBaseEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBASEEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
