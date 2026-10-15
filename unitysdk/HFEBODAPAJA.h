#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HFEBODAPAJA;
namespace RPG::GameCore { class TargetEvaluator; }

#define HFEBODAPAJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9F400)
#define HFEBODAPAJA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE9F460)
#define HFEBODAPAJA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9F370)

inline static constexpr unsigned int HFEBODAPAJA_TypeDefinitionIndex = 22119;

	class HFEBODAPAJA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* AAAMAALDKGM; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::System::UInt32>* OFOLKIGEAOE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBODAPAJA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HFEBODAPAJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFEBODAPAJA*))((::PBYTE)hIl2Cpp + HFEBODAPAJA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HFEBODAPAJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFEBODAPAJA*))((::PBYTE)hIl2Cpp + HFEBODAPAJA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
