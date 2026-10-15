#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEJHKFILME;
namespace System { class Object; }

#define BGEJHKFILME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA736D0)
#define BGEJHKFILME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA73710)
#define BGEJHKFILME___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA73720)

	class BGEJHKFILME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEJHKFILME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME___C_CTOR_OFFSET))(this);
		}

		::BGEJHKFILME* __cctor_b__18_0()
		{
			return ((::BGEJHKFILME*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
