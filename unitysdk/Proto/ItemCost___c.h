#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemCost; }
namespace System { class Object; }

#define PROTO_ITEMCOST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD2A90)
#define PROTO_ITEMCOST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD2AC0)
#define PROTO_ITEMCOST___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1DFD2AD0)

namespace Proto
{
	inline static constexpr unsigned int ItemCost___c_TypeDefinitionIndex = 27790;

	class ItemCost___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4C540);
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
