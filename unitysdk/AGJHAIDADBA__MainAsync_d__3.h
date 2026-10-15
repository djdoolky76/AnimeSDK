#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
class AGJHAIDADBA;
class OFBJPFPNFBP;
namespace System { class Nullable; }
namespace System { class Object; }

#define AGJHAIDADBA__MAINASYNC_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0xCF35430)
#define AGJHAIDADBA__MAINASYNC_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCF35BD0)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCF36250)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCF362B0)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCF36260)
#define AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF35BC0)

	template <typename T1, typename T2, typename T3>
	class AGJHAIDADBA__MainAsync_d__3 : public ::System::Object
	{
	public:
		::FKDIDBGBGMF goalNode; // 0x10
		::OFBJPFPNFBP* container; // 0x20
		::AGJHAIDADBA* __4__this; // 0x28
		::System::Object* __8__1; // 0x30
		::FKDIDBGBGMF startNode; // 0x38
		::System::Single H; // 0x48
		::System::Single G; // 0x4C
		::System::Int32 __1__state; // 0x50
		::System::Nullable* __2__current; // 0x54
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

		::System::Nullable* System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHAIDADBA__MAINASYNC_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
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
