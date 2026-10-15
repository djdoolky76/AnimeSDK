#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class OEHCEHBLPON;
class OFBJPFPNFBP;
namespace System { class Object; }

#define OEHCEHBLPON__MAINASYNC_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2CF40)
#define OEHCEHBLPON__MAINASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBE2D910)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE2D9A0)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE2DA00)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBE2D9B0)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2D900)

inline static constexpr unsigned int OEHCEHBLPON__MainAsync_d__0_TypeDefinitionIndex = 48914;

	class OEHCEHBLPON__MainAsync_d__0 : public ::System::Object
	{
	public:
		::FKDIDBGBGMF goalNode; // 0x10
		::FKDIDBGBGMF startNode; // 0x20
		::OFBJPFPNFBP* container; // 0x30
		::OEHCEHBLPON* __4__this; // 0x38
		::System::Single G; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Nullable_1<::System::Boolean> __2__current; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEHCEHBLPON__MAINASYNC_D__0_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCEHBLPON__MAINASYNC_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> System_Collections_Generic_IEnumerator_System_Boolean___get_Current()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
