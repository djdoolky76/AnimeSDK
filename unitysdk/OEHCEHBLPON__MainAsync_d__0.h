#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class OEHCEHBLPON;
class OFBJPFPNFBP;
namespace System { class Object; }

#define OEHCEHBLPON__MAINASYNC_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE25AB0)
#define OEHCEHBLPON__MAINASYNC_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBE26480)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE26510)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBE26570)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBE26520)
#define OEHCEHBLPON__MAINASYNC_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE26470)

inline static constexpr unsigned int OEHCEHBLPON__MainAsync_d__0_TypeDefinitionIndex = 48914;

	class OEHCEHBLPON__MainAsync_d__0 : public ::System::Object
	{
	public:
		::OFBJPFPNFBP* container; // 0x10
		::OEHCEHBLPON* __4__this; // 0x18
		::FKDIDBGBGMF goalNode; // 0x20
		::FKDIDBGBGMF startNode; // 0x30
		::System::Single G; // 0x40
		::System::Nullable_1<::System::Boolean> __2__current; // 0x44
		::System::Int32 __1__state; // 0x48
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
