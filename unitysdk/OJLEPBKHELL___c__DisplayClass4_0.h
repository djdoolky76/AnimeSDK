#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHFCJKKKNLP;
class OJLEPBKHELL;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Exception; }

#define OJLEPBKHELL___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEBE4C0)
#define OJLEPBKHELL___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0xBEBE510)
#define OJLEPBKHELL___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0xBEBE600)

	class OJLEPBKHELL___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::OJLEPBKHELL* __4__this; // 0x10
		::FHFCJKKKNLP* gameFlowPrepareService; // 0x18
		::System::Boolean needShowStageProgressPage; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLEPBKHELL___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + OJLEPBKHELL___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, a1);
		}

		::System::Void __DoEnterGameFlow_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OJLEPBKHELL___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET))(this, a1);
		}

	};
