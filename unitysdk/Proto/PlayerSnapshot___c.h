#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class PlayerSnapshot; }
namespace System { class Object; }

#define PROTO_PLAYERSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00CCF0)
#define PROTO_PLAYERSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00CD30)
#define PROTO_PLAYERSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E00CD40)

namespace Proto
{
	class PlayerSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x44FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::PlayerSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::PlayerSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
