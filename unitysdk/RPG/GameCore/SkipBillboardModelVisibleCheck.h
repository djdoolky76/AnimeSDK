#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkipBillboardModelVisibleCheck; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF09E0)
#define RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF0A10)
#define RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkipBillboardModelVisibleCheck_TypeDefinitionIndex = 20463;

	class SkipBillboardModelVisibleCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Skip; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkipBillboardModelVisibleCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkipBillboardModelVisibleCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkipBillboardModelVisibleCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkipBillboardModelVisibleCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
