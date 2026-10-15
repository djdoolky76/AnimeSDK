#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HNLAMNAIFNF;
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define HNLAMNAIFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CECD120)
#define HNLAMNAIFNF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CECD130)
#define HNLAMNAIFNF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CECD0F0)

inline static constexpr unsigned int HNLAMNAIFNF_TypeDefinitionIndex = 24159;

	class HNLAMNAIFNF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RtLifeBindingConfig* ECNHHNDAHKB; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CABHEAGLNDD; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLAMNAIFNF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNLAMNAIFNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNLAMNAIFNF*))((::PBYTE)hIl2Cpp + HNLAMNAIFNF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HNLAMNAIFNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNLAMNAIFNF*))((::PBYTE)hIl2Cpp + HNLAMNAIFNF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
