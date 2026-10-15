#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJGNOHEEIGD;
namespace System { class Object; }

#define BJGNOHEEIGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B540)
#define BJGNOHEEIGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0B570)
#define BJGNOHEEIGD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE0B580)

	class BJGNOHEEIGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJGNOHEEIGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGNOHEEIGD___C_CTOR_OFFSET))(this);
		}

		::BJGNOHEEIGD* __cctor_b__33_0()
		{
			return ((::BJGNOHEEIGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGNOHEEIGD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
