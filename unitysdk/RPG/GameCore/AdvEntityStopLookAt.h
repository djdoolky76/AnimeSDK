#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityStopLookAt; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D370D40)
#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D370D50)
#define RPG_GAMECORE_ADVENTITYSTOPLOOKAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D370D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityStopLookAt_TypeDefinitionIndex = 20548;

	class AdvEntityStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean StopImmediately; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSTOPLOOKAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
