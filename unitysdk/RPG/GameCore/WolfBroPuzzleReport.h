#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroPuzzleReport; }

#define RPG_GAMECORE_WOLFBROPUZZLEREPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA8EC0)
#define RPG_GAMECORE_WOLFBROPUZZLEREPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA8ED0)
#define RPG_GAMECORE_WOLFBROPUZZLEREPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA8E90)

namespace RPG::GameCore
{
	class WolfBroPuzzleReport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReportScan; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ReportScanSkillID; // 0x1C
		::System::Boolean ReportHit; // 0x20
		::System::Boolean ReportHide; // 0x21
		::System::Boolean ReportTV; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEREPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPuzzleReport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPuzzleReport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEREPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPuzzleReport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPuzzleReport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEREPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
