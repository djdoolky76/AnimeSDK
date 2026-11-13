#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBAKKNIAKBD;
class NNDAJDLAHNC;
namespace System { class Object; }

#define IBAKKNIAKBD___ENTERSTEP1_D__12_CTOR_OFFSET UNITYSDK_OFFSET(0x1943B540)
#define IBAKKNIAKBD___ENTERSTEP1_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1943BC70)
#define IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1943BF60)
#define IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1943BFC0)
#define IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1943BF70)
#define IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1943BC60)

inline static constexpr unsigned int IBAKKNIAKBD___EnterStep1_d__12_TypeDefinitionIndex = 62330;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class IBAKKNIAKBD___EnterStep1_d__12 : public ::System::Object
	{
	public:
		::NNDAJDLAHNC* __2__current; // 0x10
		::IBAKKNIAKBD* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBAKKNIAKBD___ENTERSTEP1_D__12_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD___ENTERSTEP1_D__12_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKKNIAKBD___ENTERSTEP1_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
