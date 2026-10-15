#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FBHINCGMBDJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define FBHINCGMBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCAA40)
#define FBHINCGMBDJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDCAA50)
#define FBHINCGMBDJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDCAA10)

	class FBHINCGMBDJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MDJKJJEJNFG; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHINCGMBDJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FBHINCGMBDJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBHINCGMBDJ*))((::PBYTE)hIl2Cpp + FBHINCGMBDJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FBHINCGMBDJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FBHINCGMBDJ*))((::PBYTE)hIl2Cpp + FBHINCGMBDJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
