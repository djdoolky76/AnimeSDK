#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateExecute; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPSTATEEXECUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958DA0)
#define RPG_GAMECORE_PROPSTATEEXECUTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D958DD0)
#define RPG_GAMECORE_PROPSTATEEXECUTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D958D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateExecute_TypeDefinitionIndex = 20434;

	class PropStateExecute : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropState State; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Execute; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEEXECUTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateExecute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEEXECUTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateExecute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEEXECUTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
