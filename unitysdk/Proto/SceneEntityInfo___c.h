#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class SceneEntityInfo; }
namespace System { class Object; }

#define PROTO_SCENEENTITYINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5130)
#define PROTO_SCENEENTITYINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5160)
#define PROTO_SCENEENTITYINFO___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x1DFE5170)

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo___c_TypeDefinitionIndex = 33941;

	class SceneEntityInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4EBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO___C_CTOR_OFFSET))(this);
		}

		::Proto::SceneEntityInfo* __cctor_b__64_0()
		{
			return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO___C___CCTOR_B__64_0_OFFSET))(this);
		}

	};
}
