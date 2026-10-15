#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class SwitchHandSnapshot; }
namespace System { class Object; }

#define PROTO_SWITCHHANDSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E016F40)
#define PROTO_SWITCHHANDSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E016F80)
#define PROTO_SWITCHHANDSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E016F90)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandSnapshot___c_TypeDefinitionIndex = 25855;

	class SwitchHandSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x46960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::SwitchHandSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::SwitchHandSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
