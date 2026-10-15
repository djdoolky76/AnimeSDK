#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemList; }
namespace System { class Object; }

#define PROTO_ITEMLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E000920)
#define PROTO_ITEMLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E000950)
#define PROTO_ITEMLIST___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E000960)

namespace Proto
{
	class ItemList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43D40);
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
