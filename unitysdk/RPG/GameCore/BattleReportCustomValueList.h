#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleReportCustomValue; }
namespace RPG::GameCore { class BattleReportCustomValueList; }

#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D467420)
#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D467360)

namespace RPG::GameCore
{
	class BattleReportCustomValueList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleReportCustomValue*>* ReportList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleReportCustomValueList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleReportCustomValueList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUELIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
