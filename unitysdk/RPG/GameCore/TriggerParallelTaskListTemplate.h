#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ParallelConfigForTaskListTemplate; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TriggerParallelTaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC56E70)
#define RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC56E80)
#define RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC56E40)

namespace RPG::GameCore
{
	class TriggerParallelTaskListTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FromGlobal; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ParallelConfigForTaskListTemplate*>* Templates; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SequenceConfig*>* TemplateParamSequences; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELTASKLISTTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
