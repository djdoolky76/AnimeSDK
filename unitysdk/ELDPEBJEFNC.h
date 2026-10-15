#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELDPEBJEFNC;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }

#define ELDPEBJEFNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD99ED0)
#define ELDPEBJEFNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD99EE0)
#define ELDPEBJEFNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD99EA0)

	class ELDPEBJEFNC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x18
		::System::Boolean CAGCHKJHMPD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDPEBJEFNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELDPEBJEFNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELDPEBJEFNC*))((::PBYTE)hIl2Cpp + ELDPEBJEFNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELDPEBJEFNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELDPEBJEFNC*))((::PBYTE)hIl2Cpp + ELDPEBJEFNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
