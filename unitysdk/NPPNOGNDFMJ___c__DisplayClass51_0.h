#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC606CF0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS51_0___ACQUIREOWNEDHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0xC60F8E0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS51_0___ACQUIREOWNEDHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0xC60F980)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass51_0_TypeDefinitionIndex = 61875;

	class NPPNOGNDFMJ___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::IDisposable* handle; // 0x10
		::System::Func_1<::System::IDisposable*>* acquire; // 0x18
		::System::String* capabilityName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireOwnedHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS51_0___ACQUIREOWNEDHANDLE_B__0_OFFSET))(this);
		}

		::System::Void __AcquireOwnedHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS51_0___ACQUIREOWNEDHANDLE_B__1_OFFSET))(this);
		}

	};
