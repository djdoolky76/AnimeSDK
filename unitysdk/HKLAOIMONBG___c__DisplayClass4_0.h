#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHFCJKKKNLP;
class HKLAOIMONBG;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Exception; }

#define HKLAOIMONBG___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1B70)
#define HKLAOIMONBG___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x16CA1C60)
#define HKLAOIMONBG___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x16CA1D60)

inline static constexpr unsigned int HKLAOIMONBG___c__DisplayClass4_0_TypeDefinitionIndex = 59425;

	class HKLAOIMONBG___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::HKLAOIMONBG* __4__this; // 0x10
		::FHFCJKKKNLP* gameFlowPrepareService; // 0x18
		::System::Boolean needShowStageProgressPage; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLAOIMONBG___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + HKLAOIMONBG___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, a1);
		}

		::System::Void __DoEnterGameFlow_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HKLAOIMONBG___C__DISPLAYCLASS4_0___DOENTERGAMEFLOW_B__1_OFFSET))(this, a1);
		}

	};
