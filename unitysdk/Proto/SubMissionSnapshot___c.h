#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class SubMissionSnapshot; }
namespace System { class Object; }

#define PROTO_SUBMISSIONSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20220B00)
#define PROTO_SUBMISSIONSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20220B40)
#define PROTO_SUBMISSIONSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20220B50)

namespace Proto
{
	inline static constexpr unsigned int SubMissionSnapshot___c_TypeDefinitionIndex = 26334;

	class SubMissionSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x54760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::SubMissionSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::SubMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
