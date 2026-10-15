#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ActiveMCVKeySnapshot; }
namespace System { class Object; }

#define PROTO_ACTIVEMCVKEYSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE61B0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE61F0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFE6200)

namespace Proto
{
	class ActiveMCVKeySnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::ActiveMCVKeySnapshot* __cctor_b__28_0()
		{
			return ((::Proto::ActiveMCVKeySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
