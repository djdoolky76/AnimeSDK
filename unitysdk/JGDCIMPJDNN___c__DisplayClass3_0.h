#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCBOENDMDIC;
namespace RPG::Client::Promises { class Promise; }

#define JGDCIMPJDNN___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1986E0)
#define JGDCIMPJDNN___C__DISPLAYCLASS3_0___WAITMISSIONDATAREADY_B__0_OFFSET UNITYSDK_OFFSET(0xB198770)

	class JGDCIMPJDNN___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::NCBOENDMDIC* rsp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __WaitMissionDataReady_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN___C__DISPLAYCLASS3_0___WAITMISSIONDATAREADY_B__0_OFFSET))(this);
		}

	};
