#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDAJDLAHNC;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define HDJIGMBHENE___LOADMAINUI_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2D4E0)
#define HDJIGMBHENE___LOADMAINUI_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15C2E470)
#define HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C2E4D0)
#define HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C2E530)
#define HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15C2E4E0)
#define HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C2E460)

inline static constexpr unsigned int HDJIGMBHENE___LoadMainUI_d__13_TypeDefinitionIndex = 61176;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class HDJIGMBHENE___LoadMainUI_d__13 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* uiController; // 0x10
		::NNDAJDLAHNC* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDJIGMBHENE___LOADMAINUI_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIGMBHENE___LOADMAINUI_D__13_MOVENEXT_OFFSET))(this);
		}

		::NNDAJDLAHNC* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::NNDAJDLAHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJIGMBHENE___LOADMAINUI_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
