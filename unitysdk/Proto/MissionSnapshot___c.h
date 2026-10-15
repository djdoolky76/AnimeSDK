#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MissionSnapshot; }
namespace System { class Object; }

#define PROTO_MISSIONSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD8490)
#define PROTO_MISSIONSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD84D0)
#define PROTO_MISSIONSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFD84E0)

namespace Proto
{
	inline static constexpr unsigned int MissionSnapshot___c_TypeDefinitionIndex = 25841;

	class MissionSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4D140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::MissionSnapshot* __cctor_b__48_0()
		{
			return ((::Proto::MissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
}
