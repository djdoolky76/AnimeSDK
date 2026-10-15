#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKHGDJGBHCD;
namespace System { class Object; }

#define JKHGDJGBHCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76B2E0)
#define JKHGDJGBHCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76B310)
#define JKHGDJGBHCD___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E76B320)

	class JKHGDJGBHCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKHGDJGBHCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHGDJGBHCD___C_CTOR_OFFSET))(this);
		}

		::JKHGDJGBHCD* __cctor_b__98_0()
		{
			return ((::JKHGDJGBHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHGDJGBHCD___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
