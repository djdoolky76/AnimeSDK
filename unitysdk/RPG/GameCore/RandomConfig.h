#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RandomConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96B5C0)
#define RPG_GAMECORE_RANDOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96B650)
#define RPG_GAMECORE_RANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96B500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomConfig_TypeDefinitionIndex = 23780;

	class RandomConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* OddsList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::RPG::GameCore::DynamicFloat* RandomCount; // 0x28
		::System::Boolean RandomUnique; // 0x30
		::System::Boolean ContinuousNotRepeat; // 0x31
		::System::Byte _padding0[0x6];
		::System::String* RandomMaskKey; // 0x38
		::System::Boolean UseIntMask; // 0x40
		::System::Boolean AutoResetRandomMask; // 0x41
		::System::Byte _padding1[0x6];
		::RPG::GameCore::TargetEvaluator* RandomMaskTarget; // 0x48
		::RPG::GameCore::DynamicValueContextScope RandomMaskScope; // 0x50
		::System::Int32 _LastRandomIndex; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
