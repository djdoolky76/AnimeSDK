#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOJNGCCBOGI;

#define OOMJGNGJNKG___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8F9F0)
#define OOMJGNGJNKG___C__DISPLAYCLASS17_0___TRYENQUEENTRYQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0xBF8FC00)

	class OOMJGNGJNKG___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::GOJNGCCBOGI* entry; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryEnqueEntryQueue_b__0(::GOJNGCCBOGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS17_0___TRYENQUEENTRYQUEUE_B__0_OFFSET))(this, a1);
		}

	};
