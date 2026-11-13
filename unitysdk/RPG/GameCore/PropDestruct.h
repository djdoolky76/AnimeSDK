#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDestruct; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPDESTRUCT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF85AA0)
#define RPG_GAMECORE_PROPDESTRUCT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF85AD0)
#define RPG_GAMECORE_PROPDESTRUCT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF85920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestruct_TypeDefinitionIndex = 22471;

	class PropDestruct : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsPreshow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestruct* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestruct*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestruct* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestruct*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
