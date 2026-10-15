#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropCurveMoveStop; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVESTOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9483D0)
#define RPG_GAMECORE_PROPCURVEMOVESTOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D948410)
#define RPG_GAMECORE_PROPCURVEMOVESTOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D948370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStop_TypeDefinitionIndex = 21012;

	class PropCurveMoveStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropCurveMoveStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropCurveMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
