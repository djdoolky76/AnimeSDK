#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLMAPACKNH;
namespace System { class Object; }

#define HDLMAPACKNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E552700)
#define HDLMAPACKNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E552740)
#define HDLMAPACKNH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E552750)

	class HDLMAPACKNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x323C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLMAPACKNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH___C_CTOR_OFFSET))(this);
		}

		::HDLMAPACKNH* __cctor_b__28_0()
		{
			return ((::HDLMAPACKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
