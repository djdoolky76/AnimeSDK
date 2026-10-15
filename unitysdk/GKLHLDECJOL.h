#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GKLHLDECJOL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define GKLHLDECJOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5FD30)
#define GKLHLDECJOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE5FDE0)
#define GKLHLDECJOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE5FC60)

	class GKLHLDECJOL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::RPG::GameCore::TargetEvaluator* EJFFMIDKADF; // 0x20
		::RPG::GameCore::DynamicFloat* MDFKCMGPPDM; // 0x28
		::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x30
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
		::RPG::GameCore::HealFormulaType LGLBKAAMKDI; // 0x40
		::System::Boolean IOJIDFGLBFD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHLDECJOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GKLHLDECJOL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GKLHLDECJOL*))((::PBYTE)hIl2Cpp + GKLHLDECJOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GKLHLDECJOL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GKLHLDECJOL*))((::PBYTE)hIl2Cpp + GKLHLDECJOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
