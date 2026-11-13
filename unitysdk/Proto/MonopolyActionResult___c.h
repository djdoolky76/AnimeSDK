#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }
namespace System { class Object; }

#define PROTO_MONOPOLYACTIONRESULT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20211D80)
#define PROTO_MONOPOLYACTIONRESULT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20211DC0)
#define PROTO_MONOPOLYACTIONRESULT___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x20211DD0)

namespace Proto
{
	inline static constexpr unsigned int MonopolyActionResult___c_TypeDefinitionIndex = 32007;

	class MonopolyActionResult___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x52FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT___C_CTOR_OFFSET))(this);
		}

		::Proto::MonopolyActionResult* __cctor_b__53_0()
		{
			return ((::Proto::MonopolyActionResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
}
