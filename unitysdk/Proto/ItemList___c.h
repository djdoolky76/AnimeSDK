#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemList; }
namespace System { class Object; }

#define PROTO_ITEMLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD32E0)
#define PROTO_ITEMLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD3310)
#define PROTO_ITEMLIST___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFD3320)

namespace Proto
{
	inline static constexpr unsigned int ItemList___c_TypeDefinitionIndex = 27785;

	class ItemList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4C660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST___C_CTOR_OFFSET))(this);
		}

		::Proto::ItemList* __cctor_b__23_0()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
