#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KKJABONKCAI;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define KKJABONKCAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06F570)
#define KKJABONKCAI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D06F590)
#define KKJABONKCAI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D06F530)

inline static constexpr unsigned int KKJABONKCAI_TypeDefinitionIndex = 24136;

	class KKJABONKCAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* FHAAHMEJMCI; // 0x18
		::RPG::GameCore::ProjectileData* PJCICCBNBEI; // 0x20
		::RPG::GameCore::NewProjectileConfig* FJFCBBOCICK; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BKNDLCGHANK; // 0x38
		::System::Boolean JGJPOFCDKFM; // 0x40
		::System::Boolean FKJPBMMCHFL; // 0x41
		::RPG::GameCore::AliveStateMask MJKLBHBEDJH; // 0x42
		::System::Int32 LNNLLMKBAGL; // 0x44
		::System::Int32 MGKPADCJGIM; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJABONKCAI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KKJABONKCAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKJABONKCAI*))((::PBYTE)hIl2Cpp + KKJABONKCAI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KKJABONKCAI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKJABONKCAI*))((::PBYTE)hIl2Cpp + KKJABONKCAI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
