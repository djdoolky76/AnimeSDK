#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBFAF40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFAF80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BBFAF90)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueOptions___c_TypeDefinitionIndex = 35800;

	class EnumValueOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x4E330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
}
