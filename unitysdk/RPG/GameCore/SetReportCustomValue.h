#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetReportCustomValue; }
namespace System { class String; }

#define RPG_GAMECORE_SETREPORTCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC01E0)
#define RPG_GAMECORE_SETREPORTCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC01F0)
#define RPG_GAMECORE_SETREPORTCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC01A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetReportCustomValue_TypeDefinitionIndex = 23659;

	class SetReportCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ReportKey; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ReportValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETREPORTCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetReportCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetReportCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETREPORTCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetReportCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetReportCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETREPORTCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
