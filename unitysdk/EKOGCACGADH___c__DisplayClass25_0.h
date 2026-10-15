#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIJMGKPIMF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EKOGCACGADH___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1550A0D0)
#define EKOGCACGADH___C__DISPLAYCLASS25_0___ASYNCLOADPARALLEL_B__0_OFFSET UNITYSDK_OFFSET(0x1550AF90)

inline static constexpr unsigned int EKOGCACGADH___c__DisplayClass25_0_TypeDefinitionIndex = 71351;

	class EKOGCACGADH___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action_1<::AHIJMGKPIMF*>* __9__0; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 total; // 0x20
		::System::Int32 count; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOGCACGADH___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void __AsyncLoadParallel_b__0(::AHIJMGKPIMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHIJMGKPIMF*))((::PBYTE)hIl2Cpp + EKOGCACGADH___C__DISPLAYCLASS25_0___ASYNCLOADPARALLEL_B__0_OFFSET))(this, a1);
		}

	};
