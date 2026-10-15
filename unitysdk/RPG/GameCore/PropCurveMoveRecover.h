#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropCurveMoveRecover; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVERECOVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D919790)
#define RPG_GAMECORE_PROPCURVEMOVERECOVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9197D0)
#define RPG_GAMECORE_PROPCURVEMOVERECOVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D919730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveRecover_TypeDefinitionIndex = 21011;

	class PropCurveMoveRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveRecover* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
