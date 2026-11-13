#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger::Services::Implementation { class BugReportPopoverService; }
namespace System { class Object; }
namespace System { class String; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0x1D42F1C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D42F650)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D42F820)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D42F880)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D42F830)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D42F640)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int BugReportPopoverService__OpenCo_d__7_TypeDefinitionIndex = 39003;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class BugReportPopoverService__OpenCo_d__7 : public ::System::Object
	{
	public:
		::System::String* descriptionText; // 0x10
		::System::Object* __2__current; // 0x18
		::SRDebugger::Services::Implementation::BugReportPopoverService* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Boolean takeScreenshot; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__OPENCO_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
