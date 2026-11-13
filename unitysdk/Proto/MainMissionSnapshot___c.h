#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MainMissionSnapshot; }
namespace System { class Object; }

#define PROTO_MAINMISSIONSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2020D510)
#define PROTO_MAINMISSIONSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2020D550)
#define PROTO_MAINMISSIONSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2020D560)

namespace Proto
{
	inline static constexpr unsigned int MainMissionSnapshot___c_TypeDefinitionIndex = 26336;

	class MainMissionSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x52850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::MainMissionSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MainMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
