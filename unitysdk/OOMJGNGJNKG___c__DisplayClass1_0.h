#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"
class BDOHIOEMGCI;
class GOJNGCCBOGI;

#define OOMJGNGJNKG___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8E4A0)
#define OOMJGNGJNKG___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET UNITYSDK_OFFSET(0xBF8FC30)
#define OOMJGNGJNKG___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET UNITYSDK_OFFSET(0xBF8FD30)
#define OOMJGNGJNKG___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET UNITYSDK_OFFSET(0xBF8FD50)

	class OOMJGNGJNKG___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatMessageType messageType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ClearAllToast_b__0(::BDOHIOEMGCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDOHIOEMGCI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _ClearAllToast_b__1(::GOJNGCCBOGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _ClearAllToast_b__2(::GOJNGCCBOGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + OOMJGNGJNKG___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET))(this, a1);
		}

	};
