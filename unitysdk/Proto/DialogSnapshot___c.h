#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class DialogSnapshot; }
namespace System { class Object; }

#define PROTO_DIALOGSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFECA90)
#define PROTO_DIALOGSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFECAD0)
#define PROTO_DIALOGSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFECAE0)

namespace Proto
{
	inline static constexpr unsigned int DialogSnapshot___c_TypeDefinitionIndex = 25851;

	class DialogSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::DialogSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::DialogSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
