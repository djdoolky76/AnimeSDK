#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption_Types_NamePart; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6B2D60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20902CB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x20902CC0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_Types_NamePart___c_TypeDefinitionIndex = 36736;

	class UninterpretedOption_Types_NamePart___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x67BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
}
