#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetModelDynamicLoadPriority; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC5CE0)
#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC5CF0)
#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC5CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetModelDynamicLoadPriority_TypeDefinitionIndex = 22980;

	class SetTargetModelDynamicLoadPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PriorityKey; // 0x20
		::System::Boolean Active; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
