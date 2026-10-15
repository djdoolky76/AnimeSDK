#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AGINOJMPLJF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define AGINOJMPLJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC90330)
#define AGINOJMPLJF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC90370)
#define AGINOJMPLJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC902D0)

inline static constexpr unsigned int AGINOJMPLJF_TypeDefinitionIndex = 20192;

	class AGINOJMPLJF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFJJBPMHEJD; // 0x20
		::RPG::GameCore::SpecialStateType CMBLAFNGAOB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGINOJMPLJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AGINOJMPLJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGINOJMPLJF*))((::PBYTE)hIl2Cpp + AGINOJMPLJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AGINOJMPLJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGINOJMPLJF*))((::PBYTE)hIl2Cpp + AGINOJMPLJF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
