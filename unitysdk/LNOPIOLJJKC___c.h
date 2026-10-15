#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNOPIOLJJKC;
namespace System { class Object; }

#define LNOPIOLJJKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B70C0)
#define LNOPIOLJJKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B7100)
#define LNOPIOLJJKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9B7110)

	class LNOPIOLJJKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x506B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNOPIOLJJKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC___C_CTOR_OFFSET))(this);
		}

		::LNOPIOLJJKC* __cctor_b__33_0()
		{
			return ((::LNOPIOLJJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOPIOLJJKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
