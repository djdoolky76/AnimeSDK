#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ACDJHCBFNJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define ACDJHCBFNJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA3E70)
#define ACDJHCBFNJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCA3EB0)
#define ACDJHCBFNJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA3E10)

	class ACDJHCBFNJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDJHCBFNJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ACDJHCBFNJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACDJHCBFNJN*))((::PBYTE)hIl2Cpp + ACDJHCBFNJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ACDJHCBFNJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACDJHCBFNJN*))((::PBYTE)hIl2Cpp + ACDJHCBFNJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
