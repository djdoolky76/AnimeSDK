#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class RotationMapInfoSnapshot; }
namespace System { class Object; }

#define PROTO_ROTATIONMAPINFOSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0100E0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E010120)
#define PROTO_ROTATIONMAPINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E010130)

namespace Proto
{
	class RotationMapInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x456F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::RotationMapInfoSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::RotationMapInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
