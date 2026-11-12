#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ;

#define NPPNOGNDFMJ___C__DISPLAYCLASS94_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC612800)
#define NPPNOGNDFMJ___C__DISPLAYCLASS94_0___ACQUIREGAMEPLAYLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xC612810)
#define NPPNOGNDFMJ___C__DISPLAYCLASS94_0___ACQUIREGAMEPLAYLOCK_B__1_OFFSET UNITYSDK_OFFSET(0xC612990)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass94_0_TypeDefinitionIndex = 61893;

	class NPPNOGNDFMJ___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::NPPNOGNDFMJ* __4__this; // 0x10
		::RPG::Client::LockSource source; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS94_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireGameplayLock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS94_0___ACQUIREGAMEPLAYLOCK_B__0_OFFSET))(this);
		}

		::System::Void __AcquireGameplayLock_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS94_0___ACQUIREGAMEPLAYLOCK_B__1_OFFSET))(this);
		}

	};
