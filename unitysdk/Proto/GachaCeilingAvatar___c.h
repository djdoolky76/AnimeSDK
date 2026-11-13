#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GachaCeilingAvatar; }
namespace System { class Object; }

#define PROTO_GACHACEILINGAVATAR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C5990)
#define PROTO_GACHACEILINGAVATAR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C59C0)
#define PROTO_GACHACEILINGAVATAR___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4C59D0)

namespace Proto
{
	inline static constexpr unsigned int GachaCeilingAvatar___c_TypeDefinitionIndex = 29670;

	class GachaCeilingAvatar___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x500F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR___C_CTOR_OFFSET))(this);
		}

		::Proto::GachaCeilingAvatar* __cctor_b__28_0()
		{
			return ((::Proto::GachaCeilingAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
