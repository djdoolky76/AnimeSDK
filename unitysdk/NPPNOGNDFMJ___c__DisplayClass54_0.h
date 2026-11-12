#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC606F80)
#define NPPNOGNDFMJ___C__DISPLAYCLASS54_0___ACQUIRECOUNTER_B__0_OFFSET UNITYSDK_OFFSET(0xC60FDE0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS54_0___ACQUIRECOUNTER_B__1_OFFSET UNITYSDK_OFFSET(0xC60FE60)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass54_0_TypeDefinitionIndex = 61878;

	class NPPNOGNDFMJ___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Action* lastRelease; // 0x10
		::System::Action* firstAcquire; // 0x18
		::System::Func_1<::System::Int32>* getter; // 0x20
		::System::Action_1<::System::Int32>* setter; // 0x28
		::System::Boolean acquired; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireCounter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS54_0___ACQUIRECOUNTER_B__0_OFFSET))(this);
		}

		::System::Void __AcquireCounter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS54_0___ACQUIRECOUNTER_B__1_OFFSET))(this);
		}

	};
