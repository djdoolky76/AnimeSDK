#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELJDLJJBFEE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define ELJDLJJBFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA3E30)
#define ELJDLJJBFEE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDA3E40)
#define ELJDLJJBFEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDA3E00)

	class ELJDLJJBFEE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDLJJBFEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELJDLJJBFEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELJDLJJBFEE*))((::PBYTE)hIl2Cpp + ELJDLJJBFEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELJDLJJBFEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELJDLJJBFEE*))((::PBYTE)hIl2Cpp + ELJDLJJBFEE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
