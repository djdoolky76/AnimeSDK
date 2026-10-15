#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleReportCustomValue; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D467330)
#define RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4671D0)

namespace RPG::GameCore
{
	class BattleReportCustomValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ReportKey; // 0x10
		::RPG::GameCore::FixPoint DefaultValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleReportCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleReportCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEREPORTCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
