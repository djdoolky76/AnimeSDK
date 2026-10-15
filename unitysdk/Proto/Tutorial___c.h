#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class Tutorial; }
namespace System { class Object; }

#define PROTO_TUTORIAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0193E0)
#define PROTO_TUTORIAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E019410)
#define PROTO_TUTORIAL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E019420)

namespace Proto
{
	class Tutorial___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x47130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL___C_CTOR_OFFSET))(this);
		}

		::Proto::Tutorial* __cctor_b__28_0()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
