#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILAIBLNNLAO_ONKJJOMGEOF;
class NNDAJDLAHNC;
namespace System { class Object; }

#define ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0x164A6840)
#define ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x164A68A0)
#define ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164A6C30)
#define ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164A6C90)
#define ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x164A6C40)
#define ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A6890)

inline static constexpr unsigned int ILAIBLNNLAO_ONKJJOMGEOF__AsyncLoad_d__4_TypeDefinitionIndex = 60624;

	template <typename T1, typename T2, typename T3, typename T4>
	class ILAIBLNNLAO_ONKJJOMGEOF__AsyncLoad_d__4 : public ::System::Object
	{
	public:
		::ILAIBLNNLAO_ONKJJOMGEOF* __4__this; // 0x10
		::NNDAJDLAHNC* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF__ASYNCLOAD_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
