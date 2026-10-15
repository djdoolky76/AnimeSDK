#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class OptionalReward; }
namespace System { class Object; }

#define PROTO_OPTIONALREWARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E008840)
#define PROTO_OPTIONALREWARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E008880)
#define PROTO_OPTIONALREWARD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E008890)

namespace Proto
{
	class OptionalReward___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x44210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD___C_CTOR_OFFSET))(this);
		}

		::Proto::OptionalReward* __cctor_b__28_0()
		{
			return ((::Proto::OptionalReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
