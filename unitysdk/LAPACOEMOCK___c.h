#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPACOEMOCK;
namespace System { class Object; }

#define LAPACOEMOCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4730)
#define LAPACOEMOCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4770)
#define LAPACOEMOCK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8D4780)

	class LAPACOEMOCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FA70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPACOEMOCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK___C_CTOR_OFFSET))(this);
		}

		::LAPACOEMOCK* __cctor_b__38_0()
		{
			return ((::LAPACOEMOCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPACOEMOCK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
