#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJEOBMBMNIN;
namespace System { class Object; }

#define KJEOBMBMNIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86A970)
#define KJEOBMBMNIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86A9B0)
#define KJEOBMBMNIN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E86A9C0)

	class KJEOBMBMNIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJEOBMBMNIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN___C_CTOR_OFFSET))(this);
		}

		::KJEOBMBMNIN* __cctor_b__48_0()
		{
			return ((::KJEOBMBMNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEOBMBMNIN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
