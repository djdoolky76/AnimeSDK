#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropDestroy; }

#define RPG_GAMECORE_WAITPROPDESTROY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC71320)
#define RPG_GAMECORE_WAITPROPDESTROY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC71350)
#define RPG_GAMECORE_WAITPROPDESTROY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC712D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropDestroy_TypeDefinitionIndex = 21569;

	class WaitPropDestroy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropDestroy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropDestroy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
