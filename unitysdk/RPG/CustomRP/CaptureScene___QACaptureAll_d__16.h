#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CaptureScene; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE28B0)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CBE3FB0)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CBE4950)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CBE49B0)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CBE4960)
#define RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBE3F90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___QACaptureAll_d__16_TypeDefinitionIndex = 37603;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	class CaptureScene___QACaptureAll_d__16 : public ::System::Object
	{
	public:
		::System::String* _name_5__3; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::CustomRP::CaptureScene* __4__this; // 0x20
		::System::String* _folder_5__2; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___QACAPTUREALL_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
