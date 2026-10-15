#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLHCADMDJCE;
namespace System { class Object; }

#define NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6D200)
#define NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBC6EA70)
#define NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBC6EB20)
#define NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBC6EB80)
#define NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBC6EB30)
#define NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC6EA60)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class NLHCADMDJCE___RefreshPredictUltraGroupsCoroutine_d__12 : public ::System::Object
	{
	public:
		::NLHCADMDJCE* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE___REFRESHPREDICTULTRAGROUPSCOROUTINE_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
