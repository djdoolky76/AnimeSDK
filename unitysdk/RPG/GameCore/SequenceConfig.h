#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SEQUENCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8CAA0)
#define RPG_GAMECORE_SEQUENCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8CAB0)
#define RPG_GAMECORE_SEQUENCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8CA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SequenceConfig_TypeDefinitionIndex = 23779;

	class SequenceConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SEQUENCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SequenceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SequenceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SEQUENCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SequenceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SequenceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SEQUENCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
