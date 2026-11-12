#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ;
namespace RPG::GameCore { class GameEntity; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS55_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6070D0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS55_0___ACQUIREMAINSTREAMINGLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xC60FEF0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS55_0___ACQUIREMAINSTREAMINGLOCK_B__1_OFFSET UNITYSDK_OFFSET(0xC610250)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass55_0_TypeDefinitionIndex = 61879;

	class NPPNOGNDFMJ___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::NPPNOGNDFMJ* __4__this; // 0x18
		::System::Int32 id; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS55_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireMainStreamingLock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS55_0___ACQUIREMAINSTREAMINGLOCK_B__0_OFFSET))(this);
		}

		::System::Void __AcquireMainStreamingLock_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS55_0___ACQUIREMAINSTREAMINGLOCK_B__1_OFFSET))(this);
		}

	};
