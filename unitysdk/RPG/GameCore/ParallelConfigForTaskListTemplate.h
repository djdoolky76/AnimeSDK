#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8ED3B0)
#define RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8ED090)

namespace RPG::GameCore
{
	class ParallelConfigForTaskListTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicFloat* BaseDelay; // 0x18
		::RPG::GameCore::DynamicFloat* DelayInterval; // 0x20
		::RPG::GameCore::DynamicFloat* ParallelCount; // 0x28
		::RPG::GameCore::TargetEvaluator* SetAsParamEntity; // 0x30
		::System::Boolean UseParamEntityCountForParallelCount; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParallelConfigForTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParallelConfigForTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIGFORTASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
