#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class Goods; }
namespace System { class Object; }

#define PROTO_GOODS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFBB60)
#define PROTO_GOODS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFBB90)
#define PROTO_GOODS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DFFBBA0)

namespace Proto
{
	class Goods___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GOODS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS___C_CTOR_OFFSET))(this);
		}

		::Proto::Goods* __cctor_b__43_0()
		{
			return ((::Proto::Goods*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
}
