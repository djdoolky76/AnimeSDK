#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemCost; }
namespace System { class Object; }

#define PROTO_ITEMCOST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0000D0)
#define PROTO_ITEMCOST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E000100)
#define PROTO_ITEMCOST___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1E000110)

namespace Proto
{
	class ItemCost___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMCOST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST___C_CTOR_OFFSET))(this);
		}

		::Proto::ItemCost* __cctor_b__40_0()
		{
			return ((::Proto::ItemCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
}
