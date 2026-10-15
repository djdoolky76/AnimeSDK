#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearFormationFaceDelta; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARFORMATIONFACEDELTA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588A20)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588A30)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5889F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearFormationFaceDelta_TypeDefinitionIndex = 23389;

	class ClearFormationFaceDelta : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearFormationFaceDelta* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearFormationFaceDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearFormationFaceDelta* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearFormationFaceDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
