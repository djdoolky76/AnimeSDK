#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class EntitySnapshot; }
namespace System { class Object; }

#define PROTO_ENTITYSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEF660)
#define PROTO_ENTITYSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEF6A0)
#define PROTO_ENTITYSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFEF6B0)

namespace Proto
{
	class EntitySnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::EntitySnapshot* __cctor_b__48_0()
		{
			return ((::Proto::EntitySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
}
