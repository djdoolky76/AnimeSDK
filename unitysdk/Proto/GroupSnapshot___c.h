#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GroupSnapshot; }
namespace System { class Object; }

#define PROTO_GROUPSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2AE380)
#define PROTO_GROUPSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2AE3C0)
#define PROTO_GROUPSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F2AE3D0)

namespace Proto
{
	inline static constexpr unsigned int GroupSnapshot___c_TypeDefinitionIndex = 26324;

	class GroupSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4F120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::GroupSnapshot* __cctor_b__48_0()
		{
			return ((::Proto::GroupSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
}
