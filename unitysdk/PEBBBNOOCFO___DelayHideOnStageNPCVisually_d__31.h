#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEBBBNOOCFO;
namespace System { class Object; }

#define PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_CTOR_OFFSET UNITYSDK_OFFSET(0xC02FDE0)
#define PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC0320E0)
#define PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC032350)
#define PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC0323B0)
#define PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC032360)
#define PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0320D0)

inline static constexpr unsigned int PEBBBNOOCFO___DelayHideOnStageNPCVisually_d__31_TypeDefinitionIndex = 60608;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	class PEBBBNOOCFO___DelayHideOnStageNPCVisually_d__31 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::PEBBBNOOCFO* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBBBNOOCFO___DELAYHIDEONSTAGENPCVISUALLY_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
