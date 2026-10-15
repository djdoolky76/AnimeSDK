#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDropEntityAction; }

#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA900)
#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BA910)
#define RPG_GAMECORE_FIVEDIMDROPENTITYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BA8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDropEntityAction_TypeDefinitionIndex = 18714;

	class FiveDimDropEntityAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::MVector3 InitDropVelocity; // 0x10
		::System::Single DropGravity; // 0x1C
		::System::Single StunTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDROPENTITYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
