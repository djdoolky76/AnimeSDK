#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Compliance { class ComplianceModule; }
namespace System { class Action; }

#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCBAC7A0)
#define RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE___C__DISPLAYCLASS2_0__DOFTCDIRECTPURCHASE_B__0_OFFSET UNITYSDK_OFFSET(0xCBACF50)

namespace RPG::Client::Compliance
{
	class ComplianceModule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::Compliance::ComplianceModule* __4__this; // 0x10
		::System::Action* onResult; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _DoFtcDirectPurchase_b__0(::RPG::Client::PayProductResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_COMPLIANCEMODULE___C__DISPLAYCLASS2_0__DOFTCDIRECTPURCHASE_B__0_OFFSET))(this, a1);
		}

	};
}
