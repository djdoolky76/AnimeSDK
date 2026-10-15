#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BECJPAKGDMA;
class FHFCJKKKNLP;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Exception; }

#define BECJPAKGDMA___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1630FDD0)
#define BECJPAKGDMA___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1630FF10)
#define BECJPAKGDMA___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1630FFF0)

	class BECJPAKGDMA___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FHFCJKKKNLP* gameFlowPrepareService; // 0x10
		::BECJPAKGDMA* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + BECJPAKGDMA___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, a1);
		}

		::System::Void __DoEnterGameFlow_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BECJPAKGDMA___C__DISPLAYCLASS10_0___DOENTERGAMEFLOW_B__1_OFFSET))(this, a1);
		}

	};
