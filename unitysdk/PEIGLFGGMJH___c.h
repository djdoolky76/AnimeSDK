#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEIGLFGGMJH;
namespace System { class Object; }

#define PEIGLFGGMJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A750)
#define PEIGLFGGMJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A790)
#define PEIGLFGGMJH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF1A7A0)

	class PEIGLFGGMJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x398A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEIGLFGGMJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH___C_CTOR_OFFSET))(this);
		}

		::PEIGLFGGMJH* __cctor_b__18_0()
		{
			return ((::PEIGLFGGMJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
