#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLJLNCHJHB.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NIDNKHHNCDD;
namespace RPG::GameCore { class TargetEvaluator; }

#define NIDNKHHNCDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D211140)
#define NIDNKHHNCDD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D211180)
#define NIDNKHHNCDD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2110E0)

	class NIDNKHHNCDD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::INLJLNCHJHB GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDNKHHNCDD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NIDNKHHNCDD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIDNKHHNCDD*))((::PBYTE)hIl2Cpp + NIDNKHHNCDD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NIDNKHHNCDD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIDNKHHNCDD*))((::PBYTE)hIl2Cpp + NIDNKHHNCDD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
