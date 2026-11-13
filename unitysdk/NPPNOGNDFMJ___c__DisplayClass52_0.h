#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPJBOGJEJEF;
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS52_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19D12790)
#define NPPNOGNDFMJ___C__DISPLAYCLASS52_0___ACQUIREREQUIREDCAPABILITY_B__0_OFFSET UNITYSDK_OFFSET(0x19D1B410)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass52_0_TypeDefinitionIndex = 61876;

	class NPPNOGNDFMJ___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Func_2<::DPJBOGJEJEF*, ::System::IDisposable*>* acquire; // 0x10
		::DPJBOGJEJEF* provider; // 0x18
		::System::String* capabilityName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS52_0_CTOR_OFFSET))(this);
		}

		::System::IDisposable* __AcquireRequiredCapability_b__0()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS52_0___ACQUIREREQUIREDCAPABILITY_B__0_OFFSET))(this);
		}

	};
