#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADF40)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B2FB0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B2F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventAction_TypeDefinitionIndex = 18644;

	class FiveDimBaseEventAction : public ::RPG::GameCore::LittleGameBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
