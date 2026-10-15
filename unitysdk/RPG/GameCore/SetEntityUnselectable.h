#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityUnselectable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB18C0)
#define RPG_GAMECORE_SETENTITYUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB18D0)
#define RPG_GAMECORE_SETENTITYUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB1890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityUnselectable_TypeDefinitionIndex = 22720;

	class SetEntityUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Unselectable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
