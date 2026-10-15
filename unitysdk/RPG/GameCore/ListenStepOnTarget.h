#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ListenStepOnTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LISTENSTEPONTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5E60)
#define RPG_GAMECORE_LISTENSTEPONTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D5E70)
#define RPG_GAMECORE_LISTENSTEPONTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D5E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenStepOnTarget_TypeDefinitionIndex = 20645;

	class ListenStepOnTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean FilterFollowUnit; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetStepOn; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNoTargetStepOn; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterTarget; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveTarget; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENSTEPONTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ListenStepOnTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ListenStepOnTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENSTEPONTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ListenStepOnTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ListenStepOnTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENSTEPONTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
