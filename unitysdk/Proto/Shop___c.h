#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class Shop; }
namespace System { class Object; }

#define PROTO_SHOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0136D0)
#define PROTO_SHOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E013700)
#define PROTO_SHOP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E013710)

namespace Proto
{
	inline static constexpr unsigned int Shop___c_TypeDefinitionIndex = 34172;

	class Shop___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x46030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SHOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP___C_CTOR_OFFSET))(this);
		}

		::Proto::Shop* __cctor_b__53_0()
		{
			return ((::Proto::Shop*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
}
