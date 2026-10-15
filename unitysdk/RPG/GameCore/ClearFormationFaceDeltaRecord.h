#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearFormationFaceDeltaRecord; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B66A0)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B66E0)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B6640)

namespace RPG::GameCore
{
	class ClearFormationFaceDeltaRecord : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearFormationFaceDeltaRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearFormationFaceDeltaRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearFormationFaceDeltaRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearFormationFaceDeltaRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTARECORD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
