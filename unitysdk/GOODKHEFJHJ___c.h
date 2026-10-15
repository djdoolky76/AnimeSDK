#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOODKHEFJHJ;
namespace System { class Object; }

#define GOODKHEFJHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F3FE0)
#define GOODKHEFJHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F4020)
#define GOODKHEFJHJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4F4030)

	class GOODKHEFJHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOODKHEFJHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ___C_CTOR_OFFSET))(this);
		}

		::GOODKHEFJHJ* __cctor_b__33_0()
		{
			return ((::GOODKHEFJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOODKHEFJHJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
