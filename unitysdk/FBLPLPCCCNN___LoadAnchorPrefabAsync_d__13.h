#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBLPLPCCCNN;
class NNDAJDLAHNC;
namespace System { class Object; }
namespace System { class String; }

#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x156A4D90)
#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x156A5120)
#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x156A5260)
#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x156A52C0)
#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x156A5270)
#define FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A5110)

inline static constexpr unsigned int FBLPLPCCCNN___LoadAnchorPrefabAsync_d__13_TypeDefinitionIndex = 60595;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class FBLPLPCCCNN___LoadAnchorPrefabAsync_d__13 : public ::System::Object
	{
	public:
		::FBLPLPCCCNN* __4__this; // 0x10
		::System::String* configPath; // 0x18
		::NNDAJDLAHNC* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLPLPCCCNN___LOADANCHORPREFABASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
