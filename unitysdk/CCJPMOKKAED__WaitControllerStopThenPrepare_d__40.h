#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCJPMOKKAED;
namespace System { class Object; }

#define CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_CTOR_OFFSET UNITYSDK_OFFSET(0xC746540)
#define CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC746F80)
#define CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC747270)
#define CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC7472D0)
#define CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC747280)
#define CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC746F70)

inline static constexpr unsigned int CCJPMOKKAED__WaitControllerStopThenPrepare_d__40_TypeDefinitionIndex = 73218;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40>
	class CCJPMOKKAED__WaitControllerStopThenPrepare_d__40 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::CCJPMOKKAED* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 _controllerIndex_5__2; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJPMOKKAED__WAITCONTROLLERSTOPTHENPREPARE_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
