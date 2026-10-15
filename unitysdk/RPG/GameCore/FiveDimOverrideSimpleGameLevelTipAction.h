#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimOverrideSimpleGameLevelTipAction; }

#define RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1E20)
#define RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A1E30)
#define RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A1DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOverrideSimpleGameLevelTipAction_TypeDefinitionIndex = 18658;

	class FiveDimOverrideSimpleGameLevelTipAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsOverride; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID OverrideTextMapID; // 0x18
		::RPG::Client::TextID OverrideDescTextMapID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDESIMPLEGAMELEVELTIPACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
