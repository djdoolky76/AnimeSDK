#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MotionInfoSnapshot; }
namespace System { class Object; }

#define PROTO_MOTIONINFOSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E007560)
#define PROTO_MOTIONINFOSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0075A0)
#define PROTO_MOTIONINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0075B0)

namespace Proto
{
	class MotionInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::MotionInfoSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
