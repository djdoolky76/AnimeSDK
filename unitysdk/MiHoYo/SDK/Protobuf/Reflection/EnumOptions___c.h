#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C697760)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6977A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1C6977B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions___c_TypeDefinitionIndex = 36726;

	class EnumOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x669C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS___C___CCTOR_B__34_0_OFFSET))(this);
		}

	};
}
