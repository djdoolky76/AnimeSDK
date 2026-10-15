#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MNKHPOAFPDP;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define MNKHPOAFPDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D8350)
#define MNKHPOAFPDP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1D8380)
#define MNKHPOAFPDP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D8300)

	class MNKHPOAFPDP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* EJHODPJIFIN; // 0x20
		::System::UInt32 NFECLMGILCH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKHPOAFPDP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MNKHPOAFPDP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNKHPOAFPDP*))((::PBYTE)hIl2Cpp + MNKHPOAFPDP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MNKHPOAFPDP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNKHPOAFPDP*))((::PBYTE)hIl2Cpp + MNKHPOAFPDP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
