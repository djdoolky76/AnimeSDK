#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define OOHFBGJHCMB___C__DISPLAYCLASS60_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF83B40)
#define OOHFBGJHCMB___C__DISPLAYCLASS60_0___SHOWCONFIRMFORCESAVENORMALLINEUPDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xBF84370)

	class OOHFBGJHCMB___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* result; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS60_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowConfirmForceSaveNormalLineupDialog_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS60_0___SHOWCONFIRMFORCESAVENORMALLINEUPDIALOG_B__0_OFFSET))(this, a1);
		}

	};
