#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class AGJHAIDADBA;
class OFBJPFPNFBP;
namespace System { class Object; }

#define AGJHAIDADBA__MAINASYNC_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0xD5EC340)
#define AGJHAIDADBA__MAINASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD5ECAE0)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD5ED170)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD5ED1D0)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD5ED180)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5ECAD0)

inline static constexpr unsigned int AGJHAIDADBA__MainAsync_d__3_TypeDefinitionIndex = 49969;

	template <typename T1, typename T2, typename T3>
	class AGJHAIDADBA__MainAsync_d__3 : public ::System::Object
	{
	public:
		::OFBJPFPNFBP* container; // 0x10
		::AGJHAIDADBA* __4__this; // 0x18
		::FKDIDBGBGMF goalNode; // 0x20
		::System::Object* __8__1; // 0x30
		::FKDIDBGBGMF startNode; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Single G; // 0x4C
		::System::Nullable_1<::System::Boolean> __2__current; // 0x50
		::System::Single H; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
