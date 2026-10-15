#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class Item; }
namespace System { class Object; }

#define PROTO_ITEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFE710)
#define PROTO_ITEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFE740)
#define PROTO_ITEM___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1DFFE750)

namespace Proto
{
	inline static constexpr unsigned int Item___c_TypeDefinitionIndex = 27783;

	class Item___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM___C_CTOR_OFFSET))(this);
		}

		::Proto::Item* __cctor_b__63_0()
		{
			return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEM___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
}
